/********************************************************************************
** Form generated from reading UI file 'LoginWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPlainTextEdit *LoginUserName;
    QLabel *label_2;
    QPlainTextEdit *LoginPassword;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_13;
    QPushButton *pushButton_5;
    QPushButton *pushButton_Asterisk;
    QPushButton *pushButton_1;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_8;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_pound;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(669, 363);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(238, 238, 236, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        LoginWindow->setPalette(palette);
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 91, 41));
        LoginUserName = new QPlainTextEdit(centralWidget);
        LoginUserName->setObjectName(QStringLiteral("LoginUserName"));
        LoginUserName->setGeometry(QRect(100, 20, 541, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        LoginUserName->setPalette(palette1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 17));
        LoginPassword = new QPlainTextEdit(centralWidget);
        LoginPassword->setObjectName(QStringLiteral("LoginPassword"));
        LoginPassword->setGeometry(QRect(100, 60, 541, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        LoginPassword->setPalette(palette2);
        LoginPassword->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 121, 91, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_Asterisk = new QPushButton(gridLayoutWidget);
        pushButton_Asterisk->setObjectName(QStringLiteral("pushButton_Asterisk"));

        gridLayout->addWidget(pushButton_Asterisk, 3, 0, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(290, 120, 91, 211));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget_2);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        gridLayout_2->addWidget(pushButton_0, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 2, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(390, 121, 91, 211));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(gridLayoutWidget_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_3->addWidget(pushButton_9, 0, 0, 1, 1);

        pushButton_pound = new QPushButton(gridLayoutWidget_3);
        pushButton_pound->setObjectName(QStringLiteral("pushButton_pound"));

        gridLayout_3->addWidget(pushButton_pound, 3, 0, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout_3->addWidget(pushButton_11, 2, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        gridLayout_3->addWidget(pushButton_12, 1, 0, 1, 1);

        LoginWindow->setCentralWidget(centralWidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("LoginWindow", "User Name : ", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginWindow", "Password : ", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("LoginWindow", "7", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("LoginWindow", "4", Q_NULLPTR));
        pushButton_Asterisk->setText(QApplication::translate("LoginWindow", "*", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("LoginWindow", "1", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("LoginWindow", "5", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginWindow", "2", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("LoginWindow", "0", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("LoginWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("LoginWindow", "3", Q_NULLPTR));
        pushButton_pound->setText(QApplication::translate("LoginWindow", "#", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("LoginWindow", "9", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("LoginWindow", "6", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
