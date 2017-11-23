#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QImage>
#include <QBuffer>
#include <QDebug>
#include <QPushButton>
#include <QtWidgets>





namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
   void connection();
   void image();
   void button();


   QString text;
   QPushButton* m_button;
public slots :
    //void button();

private slots:

};

#endif // MAINWINDOW_H
