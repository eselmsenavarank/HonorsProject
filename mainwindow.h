#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "privatehousing.h"
#include "studenthousing.h"
#include "financialsupport.h"


//#include "./ui_privatehousing.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    privateHousing *ph;
    StudentHousing *sh;
    FinancialSupport *fs;

};
#endif // MAINWINDOW_H
