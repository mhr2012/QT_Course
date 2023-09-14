/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QSpinBox *spbNum1;
    QSpinBox *spbNum2;
    QPushButton *pbtSET;
    QLabel *label;
    QLabel *label_2;
    QLabel *lblSum;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(338, 236);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 311, 171));
        spbNum1 = new QSpinBox(groupBox);
        spbNum1->setObjectName(QString::fromUtf8("spbNum1"));
        spbNum1->setGeometry(QRect(40, 20, 42, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        spbNum1->setFont(font);
        spbNum1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spbNum2 = new QSpinBox(groupBox);
        spbNum2->setObjectName(QString::fromUtf8("spbNum2"));
        spbNum2->setGeometry(QRect(130, 20, 42, 22));
        spbNum2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pbtSET = new QPushButton(groupBox);
        pbtSET->setObjectName(QString::fromUtf8("pbtSET"));
        pbtSET->setGeometry(QRect(70, 90, 75, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(97, 25, 21, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 24, 21, 20));
        lblSum = new QLabel(groupBox);
        lblSum->setObjectName(QString::fromUtf8("lblSum"));
        lblSum->setGeometry(QRect(224, 23, 47, 20));
        lblSum->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lblSum->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 338, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pbtSET->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        lblSum->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
