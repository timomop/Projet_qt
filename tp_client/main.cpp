#include <QCoreApplication>
#include <QObject>
#include "client.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    client c;

    return a.exec();
}
