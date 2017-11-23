#include "client.h"
#include <QFile>


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

        index = mByteArray.indexOf("aaa");
        mTaille = mByteArray.left(index).toInt();
        mByteArray.remove(0,index+3);

        qDebug() << "taille : " << mTaille << endl;


    }else if( mByteArray.size() <= mTaille){

      //  mByteArray.append(mByteArray);

        qDebug() << "mbyte : " << mByteArray.size() << endl;
    }

    if ( mTaille <= mByteArray.size()  ){
        qDebug()<< "out" << endl;
        qDebug()<< "mbyte :" << mByteArray.size() <<endl;

        /*
         // Test image
        QFile file("F:/Cours/Projet_qt/image/img.png");
        file.open(QIODevice::WriteOnly);
        file.write(mByteArray);
        file.close();
        */

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




