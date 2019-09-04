/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label;

    void setupUi(QDialog *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName(QStringLiteral("AdminMenu"));
        AdminMenu->resize(608, 961);
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
        AdminMenu->setPalette(palette);
        gridLayoutWidget = new QWidget(AdminMenu);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(5, 69, 591, 881));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("./icons/white-maintenance.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral("./icons/white-endofday.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral("./icons/white-loadnig.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral("./icons/white-parameters.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral("./icons/white-contentRemoval.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QStringLiteral("./icons/white-users.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QStringLiteral("./icons/white-upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon6);
        pushButton_7->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        QIcon icon7;
        icon7.addFile(QStringLiteral("./icons/white-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon7);
        pushButton_8->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        label = new QLabel(AdminMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 9, 591, 31));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(AdminMenu);

        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu)
    {
        AdminMenu->setWindowTitle(QApplication::translate("AdminMenu", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdminMenu", "Maint", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdminMenu", "End Of Day", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdminMenu", "Load", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AdminMenu", "Perms", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("AdminMenu", "Content Removal", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AdminMenu", "Users", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AdminMenu", "Upload", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("AdminMenu", "Close", Q_NULLPTR));
        label->setText(QApplication::translate("AdminMenu", "Admin Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
