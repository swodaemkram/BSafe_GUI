/********************************************************************************
** Form generated from reading UI file 'utdmaintwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTDMAINTWINDOW_H
#define UI_UTDMAINTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UtdMaintWindow
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *UtdMaintWindow)
    {
        if (UtdMaintWindow->objectName().isEmpty())
            UtdMaintWindow->setObjectName(QStringLiteral("UtdMaintWindow"));
        UtdMaintWindow->resize(608, 961);
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
        UtdMaintWindow->setPalette(palette);
        label = new QLabel(UtdMaintWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 591, 31));
        label->setFrameShape(QFrame::WinPanel);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(UtdMaintWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 460, 551, 341));
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

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(UtdMaintWindow);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 814, 571, 131));
        textBrowser = new QTextBrowser(UtdMaintWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 50, 571, 401));
        QPalette palette1;
        QBrush brush3(QColor(252, 175, 62, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser->setPalette(palette1);
        textBrowser->setFrameShape(QFrame::WinPanel);

        retranslateUi(UtdMaintWindow);

        QMetaObject::connectSlotsByName(UtdMaintWindow);
    } // setupUi

    void retranslateUi(QDialog *UtdMaintWindow)
    {
        UtdMaintWindow->setWindowTitle(QApplication::translate("UtdMaintWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("UtdMaintWindow", "UTD Maintenance", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("UtdMaintWindow", "Set Address", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UtdMaintWindow", "Zero", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("UtdMaintWindow", "Get Address", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("UtdMaintWindow", "Get Inventory", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("UtdMaintWindow", "Unload All", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("UtdMaintWindow", "Reset", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("UtdMaintWindow", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UtdMaintWindow: public Ui_UtdMaintWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTDMAINTWINDOW_H
