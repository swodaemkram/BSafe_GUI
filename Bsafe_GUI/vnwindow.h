#ifndef VNWINDOW_H
#define VNWINDOW_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class VNWindow;
}

class VNWindow : public QDialog
{
    Q_OBJECT

public:
    explicit VNWindow(QWidget *parent = 0);
    ~VNWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::VNWindow *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;




};

#endif // VNWINDOW_H
