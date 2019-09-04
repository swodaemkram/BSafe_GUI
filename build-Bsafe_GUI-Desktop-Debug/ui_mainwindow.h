/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Button_Touch_To_Log_In;
    QPushButton *Button_Verify_Note;
    QPushButton *Button_Exit;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(608, 961);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Button_Touch_To_Log_In = new QPushButton(centralWidget);
        Button_Touch_To_Log_In->setObjectName(QStringLiteral("Button_Touch_To_Log_In"));
        Button_Touch_To_Log_In->setGeometry(QRect(120, 300, 371, 521));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(238, 238, 236, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        Button_Touch_To_Log_In->setPalette(palette1);
        Button_Touch_To_Log_In->setFlat(true);
        Button_Verify_Note = new QPushButton(centralWidget);
        Button_Verify_Note->setObjectName(QStringLiteral("Button_Verify_Note"));
        Button_Verify_Note->setGeometry(QRect(30, 850, 271, 91));
        QIcon icon;
        icon.addFile(QStringLiteral("./icons/white-Magnifying_glass.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_Verify_Note->setIcon(icon);
        Button_Verify_Note->setIconSize(QSize(80, 80));
        Button_Exit = new QPushButton(centralWidget);
        Button_Exit->setObjectName(QStringLiteral("Button_Exit"));
        Button_Exit->setGeometry(QRect(320, 850, 261, 91));
        QIcon icon1;
        icon1.addFile(QStringLiteral("./icons/white-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_Exit->setIcon(icon1);
        Button_Exit->setIconSize(QSize(50, 50));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(30, 10, 551, 821));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush4(QColor(164, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        graphicsView->setPalette(palette2);
        MainWindow->setCentralWidget(centralWidget);
        graphicsView->raise();
        Button_Touch_To_Log_In->raise();
        Button_Verify_Note->raise();
        Button_Exit->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BSafe Ver. 00.00.08b", Q_NULLPTR));
        Button_Touch_To_Log_In->setText(QApplication::translate("MainWindow", "TOUCH HERE TO LOG IN", Q_NULLPTR));
        Button_Verify_Note->setText(QApplication::translate("MainWindow", "VERIFY NOTE", Q_NULLPTR));
        Button_Exit->setText(QApplication::translate("MainWindow", "   EXIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
