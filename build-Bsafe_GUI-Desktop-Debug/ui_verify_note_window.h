/********************************************************************************
** Form generated from reading UI file 'verify_note_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFY_NOTE_WINDOW_H
#define UI_VERIFY_NOTE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextBrowser *textBrowser;
    QPushButton *Verify_Note_Exit_Button;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(502, 591);
        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 461, 481));
        Verify_Note_Exit_Button = new QPushButton(Dialog);
        Verify_Note_Exit_Button->setObjectName(QStringLiteral("Verify_Note_Exit_Button"));
        Verify_Note_Exit_Button->setGeometry(QRect(20, 510, 461, 51));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Verify Note", Q_NULLPTR));
        Verify_Note_Exit_Button->setText(QApplication::translate("Dialog", "Finished", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFY_NOTE_WINDOW_H
