#ifndef LOCKMAINTMENU_H
#define LOCKMAINTMENU_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class LockMaintMenu;
}

class LockMaintMenu : public QDialog
{
    Q_OBJECT

public:
    explicit LockMaintMenu(QWidget *parent = 0);
    ~LockMaintMenu();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::LockMaintMenu *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;



};

#endif // LOCKMAINTMENU_H
