#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString img_name = "F:/Cours/Projet_qt/image/nature.png";
    QString img_name1 = "‪F:/Cours/Projet_qt/image/montagne_image.png";
    QString img_name2 = "F:/Cours/Projet_qt/image/m.png";

    QImage image = QImage(img_name);
    QImage image_1 = image.scaled(300,100,Qt::KeepAspectRatio);

    QImage image1 = QImage(img_name1);
    QImage image_2 = image1.scaled(300,100,Qt::KeepAspectRatio);

    QImage image2 = QImage(img_name2);
    QImage image_3 = image2.scaled(300,100,Qt::KeepAspectRatio);

    ui->label_image1->setPixmap(QPixmap::fromImage(image_1));
    ui->label_image1_2->setPixmap(QPixmap::fromImage(image_2));
    ui->label_image1_3->setPixmap(QPixmap::fromImage(image_3));
}

MainWindow::~MainWindow()
{
    delete ui;
}
