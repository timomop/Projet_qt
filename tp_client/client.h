#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QImage>
#include <QBuffer>



class client : public QObject
{
    Q_OBJECT

public:

    explicit client(QObject *parent = NULL);
    int mTaille ;
    int index;

    QTcpSocket* mSock;
    QByteArray mByteArray;

public slots:
    void clientConnected();
    void readyToRead();
};

#endif // CLIENT_H
