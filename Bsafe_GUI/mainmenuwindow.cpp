#include "mainmenuwindow.h"
#include "ui_mainmenuwindow.h"
#include "adminmenu.h"
#include "reportswindow.h"

#include <QStyle>
#include <QDesktopWidget>
#include <QLocalSocket>

MainMenuWindow::MainMenuWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenuWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//Gets Rid of all Window Buttons Minimize,Maxinize and Exit
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));//Centers This window on any screen
    /*
    ==============================================================================================================
    Lets Load a cool Background
    ==============================================================================================================
    */
         imageObject = new QImage();               //  _
         imageObject->load("./icons/BackGround.jpg");   //   |
         image = QPixmap::fromImage(*imageObject); //   |
         scene = new QGraphicsScene(this);         //   |
         scene->addPixmap(image);                  //   |_______All this to display a picture
         scene->setSceneRect(image.rect());        //   |               WOW !
         ui->graphicsView->setScene(scene);        //   |
         imageObject = new QImage();
    /*
    ===============================================================================================================
    Lets Load a Logo
    ===============================================================================================================
    */
         imageObject = new QImage();               //  _
         imageObject->load("./icons/Meridiana-Logo.png");   //   |
         image = QPixmap::fromImage(*imageObject); //   |
         scene = new QGraphicsScene(this);         //   |
         scene->addPixmap(image);                  //   |_______All this to display a picture
         scene->setSceneRect(image.rect());        //   |               WOW !
         ui->graphicsView_2->setScene(scene);        //   |
         imageObject = new QImage();
         ui->graphicsView_2->setStyleSheet("background:transparent;");


}

MainMenuWindow::~MainMenuWindow()
{
    delete ui;
}

void MainMenuWindow::on_pushButton_7_clicked()
{
    close();
}

void MainMenuWindow::on_pushButton_5_clicked()
{
    AdminMenu adminmenu;
    adminmenu.setModal(true);
    adminmenu.exec();
}

void MainMenuWindow::on_pushButton_3_clicked()
{
    ReportsWindow reportswindow;
    reportswindow.setModal(true);
    reportswindow.exec();
}

void MainMenuWindow::on_pushButton_6_clicked()
{
    printf("Unlock Button Pushed\n");
    QLocalSocket * _pSocket;
    _pSocket = new QLocalSocket(this);
    _pSocket->connectToServer("/var/run/APU_LockService0.socket" );
    _pSocket->write( "unlock" );

}

