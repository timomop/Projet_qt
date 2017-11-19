#include <QCoreApplication>
#include <QObject>
#include "server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   server n;

    return a.exec();
}
