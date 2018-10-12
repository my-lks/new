#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool led_bedroom;
    bool led_saloon;
    bool led_kitchen;
    bool led_restroom;
private slots:
    
    void on_pushButton_bed_clicked();

    void on_pushButton_saloon_clicked();

    void on_pushButton_kitchen_clicked();

    void on_pushButton_rest_clicked();

private:
    Ui::MainWindow *ui;
    void sendToServer(int cmd);
    void recvFromServer(void *buf, int count);
    int sd;
};

#endif // MAINWINDOW_H
