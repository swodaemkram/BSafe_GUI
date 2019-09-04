/********************************************************************************
** Form generated from reading UI file 'maintmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTMENU_H
#define UI_MAINTMENU_H

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

class Ui_MaintMenu
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *MaintMenu)
    {
        if (MaintMenu->objectName().isEmpty())
            MaintMenu->setObjectName(QStringLiteral("MaintMenu"));
        MaintMenu->resize(608, 961);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MaintMenu->sizePolicy().hasHeightForWidth());
        MaintMenu->setSizePolicy(sizePolicy);
        MaintMenu->setMinimumSize(QSize(0, 0));
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
        MaintMenu->setPalette(palette);
        label = new QLabel(MaintMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 591, 41));
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(MaintMenu);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 50, 571, 891));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);


        retranslateUi(MaintMenu);

        QMetaObject::connectSlotsByName(MaintMenu);
    } // setupUi

    void retranslateUi(QDialog *MaintMenu)
    {
        MaintMenu->setWindowTitle(QApplication::translate("MaintMenu", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("MaintMenu", "Maintenance Menu", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MaintMenu", "UTD", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MaintMenu", "MEI", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MaintMenu", "Lock", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MaintMenu", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MaintMenu: public Ui_MaintMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTMENU_H
