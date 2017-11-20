#include "server.h"



server::server(QObject *parent)
{
    m_tcpServer = new QTcpServer(this);
    connect(m_tcpServer, SIGNAL(newConnection()),this, SLOT(serverConnected()));
    m_tcpServer->listen(QHostAddress::Any, 5555);
}

void server::serverConnected()
{
    QTcpSocket *connection = m_tcpServer->nextPendingConnection();
    connect(connection, SIGNAL(disconnected()),this, SLOT(deleteLater()));
    connect(connection, SIGNAL(readyRead()),this, SLOT(readyToRead()));
    //  connection->write("test");


    QString img_name = "‪D:/Cours/DM/Projet_qt/image/banane.png";
    //QString img_name = "‪D:/Cours/DM/Projet_qt/image/nature.png";
    QImage image = QImage(img_name);

    if (image.isNull()){
        qDebug() << "image nul" << endl;
    }


    QByteArray ba ;
    QBuffer buffer(&ba);

    image.save(&buffer, "PNG");

    int taille = ba.size();
    QString s =  QString::number(taille);
    connection->write(s.toLocal8Bit());     //envoi de la taille
    connection->write("\0");                // envoi de la séparation
    connection->write(ba);                  // envoi de la data

}

void server::readyToRead(){

    QTcpSocket* sockTmp = (QTcpSocket*)sender();


    /*
      qDebug() << "From" << sockTmp->peerAddress().toString() << ":";
    qDebug() << sockTmp -> readAll();
*/
}



