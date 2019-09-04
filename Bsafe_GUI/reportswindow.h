#ifndef REPORTSWINDOW_H
#define REPORTSWINDOW_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class ReportsWindow;
}

class ReportsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ReportsWindow(QWidget *parent = 0);
    ~ReportsWindow();

private slots:
    void on_pushButton_7_clicked();

private:
    Ui::ReportsWindow *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;

};

#endif // REPORTSWINDOW_H
