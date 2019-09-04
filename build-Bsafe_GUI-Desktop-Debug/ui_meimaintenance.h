/********************************************************************************
** Form generated from reading UI file 'meimaintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEIMAINTENANCE_H
#define UI_MEIMAINTENANCE_H

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

class Ui_MeiMaintenance
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *MeiMaintenance)
    {
        if (MeiMaintenance->objectName().isEmpty())
            MeiMaintenance->setObjectName(QStringLiteral("MeiMaintenance"));
        MeiMaintenance->resize(608, 961);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MeiMaintenance->setPalette(palette);
        gridLayoutWidget = new QWidget(MeiMaintenance);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 571, 871));
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

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);

        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush3(QColor(252, 175, 62, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser->setPalette(palette1);
        textBrowser->setFrameShape(QFrame::WinPanel);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        label = new QLabel(MeiMaintenance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 591, 41));
        QPalette palette2;
        QBrush brush4(QColor(164, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label->setPalette(palette2);
        label->setFrameShape(QFrame::WinPanel);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(MeiMaintenance);

        QMetaObject::connectSlotsByName(MeiMaintenance);
    } // setupUi

    void retranslateUi(QDialog *MeiMaintenance)
    {
        MeiMaintenance->setWindowTitle(QApplication::translate("MeiMaintenance", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MeiMaintenance", "Stack", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MeiMaintenance", "Serial Number", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MeiMaintenance", "Reset", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MeiMaintenance", "Close", Q_NULLPTR));
        label->setText(QApplication::translate("MeiMaintenance", "MEI Maintenance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MeiMaintenance: public Ui_MeiMaintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEIMAINTENANCE_H
