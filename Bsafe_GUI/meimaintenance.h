#ifndef MEIMAINTENANCE_H
#define MEIMAINTENANCE_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class MeiMaintenance;
}

class MeiMaintenance : public QDialog
{
    Q_OBJECT

public:
    explicit MeiMaintenance(QWidget *parent = 0);
    ~MeiMaintenance();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::MeiMaintenance *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;


};

#endif // MEIMAINTENANCE_H
