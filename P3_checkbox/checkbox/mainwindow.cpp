#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pbnSet,SIGNAL(clicked(bool)),SLOT(Set()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::Set(){
    if(ui->chbC->isChecked() == 1 and ui->chbVhdl->isChecked() == 0){
        QMessageBox::information(this,"","C is good for AVR and ARM Microcontroller");
    }

    if(ui->chbC->isChecked() == 0 and ui->chbVhdl->isChecked() == 1){
        QMessageBox::information(this,"","VHDL is good for Xilinx and Intel FPGA");
    }


    if(ui->chbC->isChecked() == 1 and ui->chbVhdl->isChecked() == 1){
        QMessageBox::information(this,"","It's very good!!!");
    }


}
