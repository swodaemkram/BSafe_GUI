#include "verifynote.h"
#include "mainwindow.h"
#include "ui_verifynote.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QStyle>



VerifyNote::VerifyNote(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerifyNote)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//Gets Rid of all Window Buttons Minimize,Maxinize and Exit
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));//Centers This window on any screen
}

/*
===================================================================================================================================================================
VerifyNote Class Distructor
===================================================================================================================================================================
*/
VerifyNote::~VerifyNote()
{
    delete ui;
}
/*
===================================================================================================================================================================
The End of VerifyNote Class Distructor
===================================================================================================================================================================
*/


void VerifyNote::on_pushButton_clicked()
{
    this->hide();

    //exit(0);
}
