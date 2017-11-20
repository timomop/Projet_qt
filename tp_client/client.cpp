#include "client.h"


client::client(QObject *parent)  : QObject(parent)
{
    mTaille=0;
    mSock = new QTcpSocket(this);
    connect( mSock, SIGNAL(disconnected()),mSock, SLOT(deleteLater()));
    connect( mSock, SIGNAL(readyRead()),this, SLOT(readyToRead()));
    connect( mSock, SIGNAL(connected()),this, SLOT(clientConnected()));

    mSock->connectToHost("127.0.0.1", 5555);
}


void client::readyToRead()
{
    QTcpSocket* sockTmp = (QTcpSocket*)sender();

    mByteArray.append(sockTmp->readAll());

    if(mTaille == 0){

        int index = mByteArray.indexOf('\0');
        mTaille = mByteArray.left(index).toInt();
        mByteArray.remove(0,index+1);

        qDebug() << "taille : " << mTaille << endl;

    }else if( mByteArray.size() <= mTaille){

        qDebug() << "mByteArray :"<< mByteArray << endl;


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
