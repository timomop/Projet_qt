#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QImage>
#include <QBuffer>


class server : public QObject
{
     Q_OBJECT

public:
   explicit server(QObject *parent = nullptr);
    QTcpSocket* mSock;
    QTcpServer* m_tcpServer;
    QImage img;
public slots :

  void readyToRead();
  void serverConnected();

signals:


};

#endif // SERVER_H
