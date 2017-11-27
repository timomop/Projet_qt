#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QImage>
#include <QBuffer>
#include <QDebug>
#include <QPushButton>
#include <QtWidgets>
#include "client.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QImage img1;
    QByteArray byteimg;


private:
    Ui::MainWindow *ui;
  //  void connection();
    void image();
  //  void button();


    QString text;
    QPushButton* m_button;
public slots :


private slots:

};

#endif // MAINWINDOW_H
