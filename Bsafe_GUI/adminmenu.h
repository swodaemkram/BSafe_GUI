#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class AdminMenu;
}

class AdminMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu(QWidget *parent = 0);
    ~AdminMenu();

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AdminMenu *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;



};

#endif // ADMINMENU_H
