#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    client c;

    image();

}

void MainWindow::image()
{

    client c;
    QByteArray test;
    QImage imgtest;

    /*
    //pc fixe

    QString img_name = "F:/Cours/Projet_qt/image/nature.png";
    QString img_name1 = "‪F:/Cours/Projet_qt/image/montagne_image.png";
    QString img_name2 = "F:/Cours/Projet_qt/image/m.png";

    //PC portable

    QString img_name = "D:/Cours/DM/Projet_qt/image/montagne_image.png";
    QString img_name1 = "D:/Cours/DM/Projet_qt/image/banane.png";
    QString img_name2 = "D:/Cours/DM/Projet_qt/image/pingouin.png";


    QImage image = QImage(img_name);
    QImage image_1 = image.scaled(300,200,Qt::KeepAspectRatio);

    QImage image1 = QImage(img_name1);
    QImage image_2 = image1.scaled(300,200,Qt::KeepAspectRatio);

    QImage image2 = QImage(img_name2);
    QImage image_3 = image2.scaled(300,200,Qt::KeepAspectRatio);

    ui->label_image1->setPixmap(QPixmap::fromImage(image_1));
    ui->label_image1_2->setPixmap(QPixmap::fromImage(image_2));
    ui->label_image1_3->setPixmap(QPixmap::fromImage(image_3));
*/


   test = c.getByteArray();
   imgtest.loadFromData(test,"PNG");

    ui->label_image1_3->setPixmap(QPixmap::fromImage(imgtest));


}


void MainWindow::connection(){

    QObject::connect(m_button,SIGNAL(clicked()),this,SLOT());

}


void MainWindow::button()
{
    QString text = ui->text_in->toPlainText();
    m_button = new QPushButton;
    ui->text_in_2->setPlainText(text);

}

MainWindow::~MainWindow()
{
    delete ui;
}
