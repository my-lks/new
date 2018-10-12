#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../../include/ehome.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*创建套接字*/
    sd = socket(PF_INET, SOCK_DGRAM, 0);
    /*初始化灯的状态*/
    led_bedroom=0;
    led_saloon=0;
    led_kitchen=0;
    led_kitchen=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::sendToServer(int cmd)
{
    int res = 0;

    struct sockaddr_in addr;
    addr.sin_family = PF_INET;
    addr.sin_port  = htons(PORT);
    addr.sin_addr.s_addr = inet_addr(SERVERIP);
    res = sendto(sd, &cmd, sizeof(cmd), 0, (struct sockaddr *)&addr, sizeof(addr));
    if(res < 0)
    {
        //qWarning(strerror(res));
    }

}
void MainWindow::recvFromServer(void *buf, int count)
{
    recv(sd, buf, count, 0);
}

void MainWindow::on_pushButton_bed_clicked()
{
    int cmd = LED_BEDROOM_ON;
    if(led_bedroom) //亮灯状态
    {
        cmd = LED_BEDROOM_OFF;
        sendToServer(cmd);//发送灭灯命令
        ui->label_bed->setStyleSheet("image: url(:/images/light.bmp);");
        led_bedroom = 0;

    }
     else //灭灯状态
     {
         cmd = LED_BEDROOM_ON;
         sendToServer(cmd);//发送亮灯命令
         ui->label_bed->setStyleSheet("image: url(:/images/light.jpg);");
         led_bedroom = 1;
     }
}

void MainWindow::on_pushButton_saloon_clicked()
{
    int cmd = LED_SALOON_ON;
    if(led_saloon) //亮灯状态
    {
        cmd = LED_SALOON_OFF;
        sendToServer(cmd);//发送灭灯命令
        ui->label_saloon->setStyleSheet("image: url(:/images/light.bmp);");

       led_saloon = 0;
    }
     else //灭灯状态
     {
         cmd = LED_SALOON_ON;
         sendToServer(cmd);//发送亮灯命令
         ui->label_saloon->setStyleSheet("image: url(:/images/light.jpg);");
         led_saloon = 1;
     }
}

void MainWindow::on_pushButton_kitchen_clicked()
{
    int cmd = LED_KITCHEN_ON;
    if(led_kitchen) //亮灯状态
    {
        cmd = LED_KITCHEN_OFF;
        sendToServer(cmd);//发送灭灯命令
        ui->label_kitchen->setStyleSheet("image: url(:/images/light.bmp);");

        led_kitchen = 0;
    }
     else //灭灯状态
     {
         cmd = LED_KITCHEN_ON;
         sendToServer(cmd);//发送亮灯命令
         ui->label_kitchen->setStyleSheet("image: url(:/images/light.jpg);");
         led_kitchen = 1;
     }
}

void MainWindow::on_pushButton_rest_clicked()
{
    int cmd = LED_RESTROOM_ON;
    if(led_restroom) //亮灯状态
    {
        cmd = LED_RESTROOM_OFF;
        sendToServer(cmd);//发送灭灯命令
        ui->label_rest->setStyleSheet("image: url(:/images/light.bmp);");

        led_restroom = 0;
    }
     else //灭灯状态
     {
         cmd = LED_RESTROOM_ON;
         sendToServer(cmd);//发送亮灯命令
         ui->label_rest->setStyleSheet("image: url(:/images/light.jpg);");
         led_restroom = 1;
     }
}
