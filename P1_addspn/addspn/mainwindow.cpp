#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pbtSET,SIGNAL(clicked(bool)),SLOT(Set()));
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::Set(){

    ui->lblSum->setText(QString::number(ui->spbNum1->value() + ui->spbNum2->value()));

}
