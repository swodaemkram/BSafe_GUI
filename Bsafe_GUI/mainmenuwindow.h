#ifndef MAINMENUWINDOW_H
#define MAINMENUWINDOW_H

#include <QDialog>
#include <QGraphicsScene> //Need this for Images

namespace Ui {
class MainMenuWindow;
}

class MainMenuWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenuWindow(QWidget *parent = 0);
    ~MainMenuWindow();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainMenuWindow *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;



};

#endif // MAINMENUWINDOW_H
