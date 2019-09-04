#ifndef MAINTMENU_H
#define MAINTMENU_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class MaintMenu;
}

class MaintMenu : public QDialog
{
    Q_OBJECT

public:
    explicit MaintMenu(QWidget *parent = 0);
    ~MaintMenu();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MaintMenu *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;



};

#endif // MAINTMENU_H
