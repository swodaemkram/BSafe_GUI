

#include "mainwindow.h"
#include "vnwindow.h"
#include "loginwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);

/*
===============================================================================================================
Center Window on Screen and remove minimize, maximize and exit buttons
===============================================================================================================
*/
     //this->setWindowFlags(Qt::Dialog); //Removes Minimize and Maximize Buttons
     this->setWindowFlags(Qt::FramelessWindowHint);//Gets Rid of all Window Buttons Minimize,Maxinize and Exit
     this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));//Centers This window on any screen


     imageObject = new QImage();               //  _
     imageObject->load("./icons/White-Point.png");   //   |
     image = QPixmap::fromImage(*imageObject); //   |
     scene = new QGraphicsScene(this);         //   |
     scene->addPixmap(image);                  //   |_______All this to display a picture
     scene->setSceneRect(image.rect());        //   |               WOW !
     ui->graphicsView->setScene(scene);        //   |
     imageObject = new QImage();               //  _|
     ui->graphicsView->setStyleSheet("background:transparent;");
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
     ui->graphicsView_2->setScene(scene);        //   |
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
     ui->graphicsView_3->setScene(scene);        //   |
     imageObject = new QImage();
     ui->graphicsView_3->setStyleSheet("background:transparent;");
/*
===============================================================================================================
Load Language File This area Will Grow as we add Buttons and Labels to the Interface
===============================================================================================================
*/
     //QString TheData = "" ;
     char TheData[250] = {};
     FILE *language = NULL;
     language = fopen("CurrentLanguage","r");

     if (language == NULL)
                 {
                     printf("Could not open the language file\n");
                     exit(1);
                 }

     fscanf(language,"%[^\n]\n", TheData);
     ui->Button_Touch_To_Log_In->setText(TheData);
     memset(TheData,0,250);
     fscanf(language,"%[^\n]\n", TheData);
     ui->Button_Verify_Note->setText(TheData);
     memset(TheData,0,250);
     fscanf(language,"%[^\n]\n", TheData);
     ui->Button_Exit->setText(TheData);
     fclose(language);

/*
===============================================================================================================
End of Loading Language File
===============================================================================================================
*/

}

/*
================================================================================================================
Main Window Destructor
================================================================================================================
*/
MainWindow::~MainWindow()
{
    delete ui;
}

/*
=================================================================================================================
End of Destructer
=================================================================================================================
On Exit Button Click Exit to System
=================================================================================================================
*/
void MainWindow::on_Button_Exit_clicked()
{
    exit(0);
}
/*
=================================================================================================================
 End of Exit Function
=================================================================================================================
Verify Note Button
=================================================================================================================
 */
void MainWindow::on_Button_Verify_Note_clicked()
{
   // mVerifyNote = new VerifyNote(); // Be sure to destroy your window somewhere
   // mVerifyNote->show();
   // this->hide();
   VNWindow VerifyNoteWindow;
   VerifyNoteWindow.setModal(true);
   VerifyNoteWindow.exec();
}
/*
================================================================================================================
End of Verify Note
================================================================================================================
Touch to Log In Button
================================================================================================================
*/
void MainWindow::on_Button_Touch_To_Log_In_clicked()
{
    LoginWindow loginwindow;
    loginwindow.setModal(true);
    loginwindow.exec();
}
/*
================================================================================================================
End of Log In Button
================================================================================================================
*/
