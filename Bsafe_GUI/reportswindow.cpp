#include "reportswindow.h"
#include "ui_reportswindow.h"
#include <QStyle>
#include <QDesktopWidget>


ReportsWindow::ReportsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportsWindow)
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

ReportsWindow::~ReportsWindow()
{
    delete ui;
}

void ReportsWindow::on_pushButton_7_clicked()
{
    close();
}
