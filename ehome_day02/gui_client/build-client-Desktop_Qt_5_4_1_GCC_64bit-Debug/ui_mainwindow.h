/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_monitor;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_bed;
    QLabel *label_saloon;
    QPushButton *pushButton_kitchen;
    QLabel *label_bed;
    QPushButton *pushButton_saloon;
    QPushButton *pushButton_rest;
    QLabel *label_kitchen;
    QLabel *label_rest;
    QWidget *tab_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1020, 580));
        tab_monitor = new QWidget();
        tab_monitor->setObjectName(QStringLiteral("tab_monitor"));
        gridLayoutWidget = new QWidget(tab_monitor);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 241, 231));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_bed = new QPushButton(gridLayoutWidget);
        pushButton_bed->setObjectName(QStringLiteral("pushButton_bed"));

        gridLayout_2->addWidget(pushButton_bed, 0, 0, 1, 1);

        label_saloon = new QLabel(gridLayoutWidget);
        label_saloon->setObjectName(QStringLiteral("label_saloon"));
        label_saloon->setStyleSheet(QLatin1String("image: url(:/images/light.jpg);\n"
"image: url(:/images/light.bmp);"));

        gridLayout_2->addWidget(label_saloon, 1, 1, 1, 1);

        pushButton_kitchen = new QPushButton(gridLayoutWidget);
        pushButton_kitchen->setObjectName(QStringLiteral("pushButton_kitchen"));

        gridLayout_2->addWidget(pushButton_kitchen, 2, 0, 1, 1);

        label_bed = new QLabel(gridLayoutWidget);
        label_bed->setObjectName(QStringLiteral("label_bed"));
        label_bed->setStyleSheet(QLatin1String("image: url(:/images/light.jpg);\n"
"image: url(:/images/light.bmp);"));

        gridLayout_2->addWidget(label_bed, 0, 1, 1, 1);

        pushButton_saloon = new QPushButton(gridLayoutWidget);
        pushButton_saloon->setObjectName(QStringLiteral("pushButton_saloon"));

        gridLayout_2->addWidget(pushButton_saloon, 1, 0, 1, 1);

        pushButton_rest = new QPushButton(gridLayoutWidget);
        pushButton_rest->setObjectName(QStringLiteral("pushButton_rest"));

        gridLayout_2->addWidget(pushButton_rest, 3, 0, 1, 1);

        label_kitchen = new QLabel(gridLayoutWidget);
        label_kitchen->setObjectName(QStringLiteral("label_kitchen"));
        label_kitchen->setStyleSheet(QLatin1String("image: url(:/images/light.jpg);\n"
"image: url(:/images/light.bmp);"));

        gridLayout_2->addWidget(label_kitchen, 2, 1, 1, 1);

        label_rest = new QLabel(gridLayoutWidget);
        label_rest->setObjectName(QStringLiteral("label_rest"));
        label_rest->setStyleSheet(QLatin1String("image: url(:/images/light.jpg);\n"
"image: url(:/images/light.bmp);"));

        gridLayout_2->addWidget(label_rest, 3, 1, 1, 1);

        tabWidget->addTab(tab_monitor, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_bed->setText(QApplication::translate("MainWindow", "\345\215\247\345\256\244\347\201\257", 0));
        label_saloon->setText(QString());
        pushButton_kitchen->setText(QApplication::translate("MainWindow", "\345\216\250\346\210\277", 0));
        label_bed->setText(QString());
        pushButton_saloon->setText(QApplication::translate("MainWindow", "\345\256\242\345\216\205", 0));
        pushButton_rest->setText(QApplication::translate("MainWindow", "\345\215\253\347\224\237\351\227\264", 0));
        label_kitchen->setText(QString());
        label_rest->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_monitor), QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\233\221\346\265\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
