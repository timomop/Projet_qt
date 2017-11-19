#include "client.h"


client::client(QObject *parent)  : QObject(parent)
{
    mSock = new QTcpSocket(this);
    connect( mSock, SIGNAL(disconnected()),mSock, SLOT(deleteLater()));
    connect( mSock, SIGNAL(readyRead()),this, SLOT(readyToRead()));
    connect( mSock, SIGNAL(connected()),this, SLOT(clientConnected()));

    mSock->connectToHost("127.0.0.1", 5555);
}


void client::readyToRead()
{
    QTcpSocket* sockTmp = (QTcpSocket*)sender();

    QByteArray mByteArray(sockTmp->readAll());

    QByteArray data;

    int index = mByteArray.indexOf('\0');
    int mTaille = mByteArray.left(index).toInt();
    mByteArray.remove(0,index+1);

    if(mTaille == 0){

        // mTaille = ?

        qDebug() << "taille : " << mTaille << endl;

    }else if( data.size() < mTaille){
        data.append(mByteArray);
        qDebug() << "mByteArray :"<< mByteArray << endl;
        qDebug() << "Data : "<< data << endl;

    }



    // QByteArray b = socket->readAll();
    //qDebug() <<"from" << sockTmp->peerAdress().toString() << ":" ;
    // qDebug() << sockTmp->readAll();


}

void client::clientConnected()
{
    QTcpSocket* sockTmp = (QTcpSocket*)sender();

    sockTmp->write("client connected");

}
