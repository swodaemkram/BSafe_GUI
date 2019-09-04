#ifndef UTDMAINTWINDOW_H
#define UTDMAINTWINDOW_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class UtdMaintWindow;
}

class UtdMaintWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UtdMaintWindow(QWidget *parent = 0);
    ~UtdMaintWindow();

private slots:
    void on_pushButton_7_clicked();

private:
    Ui::UtdMaintWindow *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;


};

#endif // UTDMAINTWINDOW_H
