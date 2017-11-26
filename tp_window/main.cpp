#include "mainwindow.h"
#include "client.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //client c;
    MainWindow w;
    w.show();

    return a.exec();
}
