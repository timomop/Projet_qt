/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_image1;
    QLabel *label_image1_2;
    QLabel *label_image1_3;
    QTextEdit *text_in;
    QPushButton *m_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(945, 659);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_image1 = new QLabel(centralWidget);
        label_image1->setObjectName(QStringLiteral("label_image1"));
        label_image1->setGeometry(QRect(330, 150, 281, 261));
        label_image1_2 = new QLabel(centralWidget);
        label_image1_2->setObjectName(QStringLiteral("label_image1_2"));
        label_image1_2->setGeometry(QRect(20, 150, 271, 251));
        label_image1_3 = new QLabel(centralWidget);
        label_image1_3->setObjectName(QStringLiteral("label_image1_3"));
        label_image1_3->setGeometry(QRect(650, 150, 281, 261));
        text_in = new QTextEdit(centralWidget);
        text_in->setObjectName(QStringLiteral("text_in"));
        text_in->setGeometry(QRect(60, 20, 441, 61));
        m_button = new QPushButton(centralWidget);
        m_button->setObjectName(QStringLiteral("m_button"));
        m_button->setGeometry(QRect(510, 20, 111, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 945, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_image1->setText(QString());
        label_image1_2->setText(QString());
        label_image1_3->setText(QString());
        m_button->setText(QApplication::translate("MainWindow", "Envoi", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
