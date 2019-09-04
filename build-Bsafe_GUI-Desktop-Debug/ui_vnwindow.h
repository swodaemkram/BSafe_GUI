/********************************************************************************
** Form generated from reading UI file 'vnwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VNWINDOW_H
#define UI_VNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_VNWindow
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *VNWindow)
    {
        if (VNWindow->objectName().isEmpty())
            VNWindow->setObjectName(QStringLiteral("VNWindow"));
        VNWindow->resize(608, 961);
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
        VNWindow->setPalette(palette);
        pushButton = new QPushButton(VNWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(28, 800, 561, 131));
        textBrowser = new QTextBrowser(VNWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 571, 761));

        retranslateUi(VNWindow);

        QMetaObject::connectSlotsByName(VNWindow);
    } // setupUi

    void retranslateUi(QDialog *VNWindow)
    {
        VNWindow->setWindowTitle(QApplication::translate("VNWindow", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VNWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VNWindow: public Ui_VNWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VNWINDOW_H
