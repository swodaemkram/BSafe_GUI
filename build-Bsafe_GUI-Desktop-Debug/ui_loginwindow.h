/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QLabel *User_Id_label;
    QPlainTextEdit *plainTextEdit;
    QLabel *Password_label;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_17;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(608, 961);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        LoginWindow->setPalette(palette);
        User_Id_label = new QLabel(LoginWindow);
        User_Id_label->setObjectName(QStringLiteral("User_Id_label"));
        User_Id_label->setGeometry(QRect(30, 60, 67, 17));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        User_Id_label->setPalette(palette1);
        plainTextEdit = new QPlainTextEdit(LoginWindow);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(100, 50, 401, 31));
        Password_label = new QLabel(LoginWindow);
        Password_label->setObjectName(QStringLiteral("Password_label"));
        Password_label->setGeometry(QRect(20, 100, 81, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Password_label->setPalette(palette2);
        plainTextEdit_2 = new QPlainTextEdit(LoginWindow);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(100, 90, 401, 31));
        gridLayoutWidget = new QWidget(LoginWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 130, 181, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 4, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(LoginWindow);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(210, 130, 191, 271));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_8, 3, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(LoginWindow);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(410, 130, 181, 271));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(gridLayoutWidget_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_11, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_9, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_12, 3, 0, 1, 1);

        pushButton_17 = new QPushButton(LoginWindow);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(20, 420, 571, 141));
        QIcon icon;
        icon.addFile(QStringLiteral("./icons/white-login.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_17->setIcon(icon);
        pushButton_17->setIconSize(QSize(80, 80));
        pushButton_13 = new QPushButton(LoginWindow);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(20, 740, 121, 201));
        pushButton_14 = new QPushButton(LoginWindow);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(170, 740, 121, 201));
        pushButton_15 = new QPushButton(LoginWindow);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(320, 740, 121, 201));
        pushButton_16 = new QPushButton(LoginWindow);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(470, 740, 121, 201));
        pushButton_18 = new QPushButton(LoginWindow);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(20, 580, 571, 141));
        QIcon icon1;
        icon1.addFile(QStringLiteral("./icons/white-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon1);
        pushButton_18->setIconSize(QSize(80, 80));

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", Q_NULLPTR));
        User_Id_label->setText(QApplication::translate("LoginWindow", "User ID : ", Q_NULLPTR));
        Password_label->setText(QApplication::translate("LoginWindow", "Password : ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("LoginWindow", "7", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginWindow", "4", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("LoginWindow", "*", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginWindow", "1", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("LoginWindow", "2", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("LoginWindow", "5", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("LoginWindow", "8", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("LoginWindow", "0", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("LoginWindow", "9", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("LoginWindow", "3", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("LoginWindow", "6", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("LoginWindow", "#", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("LoginWindow", "Login", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("LoginWindow", "English", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("LoginWindow", "Spanish", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("LoginWindow", "French", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("LoginWindow", "Hebrew", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("LoginWindow", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
