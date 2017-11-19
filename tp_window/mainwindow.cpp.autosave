#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString img_name = "C:/Users/timo/Pictures/mario.png";

    QImage image = QImage(img_name);
    QImage image_2 = image->scaled(10,10,Qt::KeepAspectRatio);

    ui->label_image1->setPixmap(QPixmap::fromImage(image_2));
}

MainWindow::~MainWindow()
{
    delete ui;
}
