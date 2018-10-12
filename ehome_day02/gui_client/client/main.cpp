#include "mainwindow.h"
#include <QApplication>
#include <QFontDatabase>

//#define ONBOARD

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
#ifdef ONBOARD
    /*指定字库*/
    int id = QFontDatabase::addApplicationFont("/home/qt/lib/fonts/DroidSansFallback.ttf");
    QString msyh = QFontDatabase::applicationFontFamilies (id).at(0);
    QFont font(msyh,10);
    //设置字体大小
    font.setPointSize(15);
    a.setFont(font);
    /*全屏显示*/
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.showFullScreen();
#endif
    w.show();

    return a.exec();
}
