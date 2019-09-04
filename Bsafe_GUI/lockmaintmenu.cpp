#include "lockmaintmenu.h"
#include "ui_lockmaintmenu.h"

#include <QStyle>
#include <QDesktopWidget>
#include <QLocalSocket>

LockMaintMenu::LockMaintMenu(QWidget *parent) :
QDialog(parent),
ui(new Ui::LockMaintMenu)

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

LockMaintMenu::~LockMaintMenu()
{
    delete ui;
}

void LockMaintMenu::on_pushButton_4_clicked()
{
    close();
}

void LockMaintMenu::on_pushButton_clicked()
{
    printf("Unlock Button Pushed\n");
    QLocalSocket * _pSocket;
    _pSocket = new QLocalSocket(this);
    _pSocket->connectToServer("/var/run/APU_LockService0.socket" );
    _pSocket->write( "unlock" );

}


void LockMaintMenu::on_pushButton_5_clicked()
{
    QLocalSocket * _pSocket;
    _pSocket = new QLocalSocket(this);
    _pSocket->connectToServer("/var/run/APU_LockService0.socket" );
    _pSocket->write( "status" );
    _pSocket->waitForReadyRead(3000);
    //qDebug() << "Reading: " << _pSocket->bytesAvailable();
    //qDebug() << _pSocket->readAll();

    ui->label_2->setText(_pSocket->readAll())  ;

    return;
}
