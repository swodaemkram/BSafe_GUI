#ifndef VERIFYNOTE_H
#define VERIFYNOTE_H

//#include "mainwindow.h"
#include <QMainWindow>


namespace Ui {
class VerifyNote;
}

class VerifyNote : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerifyNote(QWidget *parent = 0);
    ~VerifyNote();

private slots:
    void on_pushButton_clicked();

private:
    Ui::VerifyNote *ui;

};

#endif // VERIFYNOTE_H
