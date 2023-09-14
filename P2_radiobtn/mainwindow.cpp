#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pbtSet,SIGNAL(clicked(bool)),SLOT(Set()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Set(){
    if(ui->rbtnYes->isChecked() == true){
        QMessageBox::information(this," ","Thanks!");
    }





    if(ui->rdbtNo->isChecked() == true){
        QMessageBox::information(this," ","It's Bad.");
    }
}
