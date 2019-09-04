/********************************************************************************
** Form generated from reading UI file 'mainmenuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENUWINDOW_H
#define UI_MAINMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenuWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *MainMenuWindow)
    {
        if (MainMenuWindow->objectName().isEmpty())
            MainMenuWindow->setObjectName(QStringLiteral("MainMenuWindow"));
        MainMenuWindow->resize(608, 961);
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
        MainMenuWindow->setPalette(palette);
        gridLayoutWidget = new QWidget(MainMenuWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 71, 591, 881));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("./icons/white_reports.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral("./icons/white-withdraw.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setBaseSize(QSize(0, 0));
        QIcon icon2;
        icon2.addFile(QStringLiteral("./icons/white-safe.png"), QSize(), QIcon::Selected, QIcon::On);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral("./icons/white_gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral("./icons/White_Lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_6, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QStringLiteral("./icons/white-key.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_7, 4, 1, 3, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QStringLiteral("./icons/White_admin-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon6);
        pushButton_5->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_5, 6, 0, 1, 1);

        verticalFrame = new QFrame(gridLayoutWidget);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        gridLayout->addWidget(verticalFrame, 5, 0, 1, 1);

        label = new QLabel(MainMenuWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(16, 10, 581, 51));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(MainMenuWindow);

        QMetaObject::connectSlotsByName(MainMenuWindow);
    } // setupUi

    void retranslateUi(QDialog *MainMenuWindow)
    {
        MainMenuWindow->setWindowTitle(QApplication::translate("MainMenuWindow", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainMenuWindow", "Reports", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainMenuWindow", "Withdraw", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainMenuWindow", "Deposit", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainMenuWindow", "Settings", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainMenuWindow", "Lock", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainMenuWindow", "Logout", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainMenuWindow", "Admin", Q_NULLPTR));
        label->setText(QApplication::translate("MainMenuWindow", "Main Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenuWindow: public Ui_MainMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENUWINDOW_H
