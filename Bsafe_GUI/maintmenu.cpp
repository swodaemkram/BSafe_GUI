#include "maintmenu.h"
#include "ui_maintmenu.h"
#include "meimaintenance.h"
#include "utdmaintwindow.h"
#include "lockmaintmenu.h"
#include <QStyle>
#include <QDesktopWidget>

MaintMenu::MaintMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MaintMenu)
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

MaintMenu::~MaintMenu()
{
    delete ui;
}

void MaintMenu::on_pushButton_4_clicked()
{
    close();
}

void MaintMenu::on_pushButton_clicked()
{
    MeiMaintenance meimaintenance;
    meimaintenance.setModal(true);
    meimaintenance.exec();
}

void MaintMenu::on_pushButton_2_clicked()
{
    UtdMaintWindow utdmaintwindow;
    utdmaintwindow.setModal(true);
    utdmaintwindow.exec();
}

void MaintMenu::on_pushButton_3_clicked()
{
    LockMaintMenu lockmaintmenu;
    lockmaintmenu.setModal(true);
    lockmaintmenu.exec();
}
