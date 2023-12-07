#include "privateh_manhattan1.h"
#include "ui_privateh_manhattan1.h"

PrivateH_Manhattan1::PrivateH_Manhattan1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrivateH_Manhattan1)
{
    printCrimeInfo();

}


PrivateH_Manhattan1::~PrivateH_Manhattan1()
{
    delete ui;
}

void PrivateH_Manhattan1::printCrimeInfo(){
    ui->setupUi(this);

    QString infoToShow;
    infoToShow += "<b>Borough Name:</b> " + mInfo.getBoroName() + "<br>";
    infoToShow += "<b>Crime Index:</b> " + mInfo.getCrimeIndex() + "<br>";
    infoToShow += "<b>Report Date: </b>" + QString::number(mInfo.getReportDate()) + "<br>";

    infoToShow += mInfo.highestCrime();

    ui->labelManhattanOutput->setText(infoToShow);
}
