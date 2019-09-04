/********************************************************************************
** Form generated from reading UI file 'verifynote.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYNOTE_H
#define UI_VERIFYNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerifyNote
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QMainWindow *VerifyNote)
    {
        if (VerifyNote->objectName().isEmpty())
            VerifyNote->setObjectName(QStringLiteral("VerifyNote"));
        VerifyNote->resize(795, 316);
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
        VerifyNote->setPalette(palette);
        centralwidget = new QWidget(VerifyNote);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 10, 741, 192));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(28, 224, 741, 71));
        VerifyNote->setCentralWidget(centralwidget);

        retranslateUi(VerifyNote);

        QMetaObject::connectSlotsByName(VerifyNote);
    } // setupUi

    void retranslateUi(QMainWindow *VerifyNote)
    {
        VerifyNote->setWindowTitle(QApplication::translate("VerifyNote", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VerifyNote", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VerifyNote: public Ui_VerifyNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYNOTE_H
