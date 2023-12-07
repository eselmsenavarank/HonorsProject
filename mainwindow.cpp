#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{

//    ph.setModal(true);
//    ph.exec()
 //   hide(); // to hide the previos page
    ph = new privateHousing(this);
    ph -> show();
}


void MainWindow::on_pushButton_6_clicked()
{
    sh = new StudentHousing(this);
    sh -> show();
}


void MainWindow::on_pushButton_7_clicked()
{
    fs = new FinancialSupport(this);
    fs -> show();
}

