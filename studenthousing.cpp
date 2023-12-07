#include "studenthousing.h"
#include "ui_studenthousing.h"

StudentHousing::StudentHousing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentHousing)
{
    ui->setupUi(this);

    //Display Manhattan Crime Details on the map
    QString MinfoToShow;
    MinfoToShow += "<b>Borough Name:</b> " + mInfo.getBoroName() + "<br>";
    MinfoToShow += "<b>Crime Index:</b> " + mInfo.getCrimeIndex() + "<br>";
    MinfoToShow += "<b>Report Date: </b>" + QString::number(mInfo.getReportDate()) + "<br>";

    MinfoToShow += mInfo.highestCrime();
    ui->ManhattanCrimeInfo->setText(MinfoToShow);

    //Display Queens Crime Details on the map
    QString qinfoToShow;
    qinfoToShow += "<b>Borough Name:</b> " + q.getBoroName() + "<br>";
    qinfoToShow += "<b>Crime Index:</b> " + q.getCrimeIndex() + "<br>";
    qinfoToShow += "<b>Report Date: </b>" + QString::number(q.getReportDate()) + "<br>";

    qinfoToShow += q.highestCrime();
    ui->QueensCrimeInfo->setText(qinfoToShow);

    //Display Brooklyn Crime Details on the map
    QString BinfoToShow;
    BinfoToShow += "<b>Borough Name:</b> " + bInfo.getBoroName() + "<br>";
    BinfoToShow += "<b>Crime Index:</b> " + bInfo.getCrimeIndex() + "<br>";
    BinfoToShow += "<b>Report Date: </b>" + QString::number(bInfo.getReportDate()) + "<br>";

    BinfoToShow += bInfo.highestCrime();
    ui->BrooklynCrimeInfo->setText(BinfoToShow);


    ui ->ManhattanCrimeInfo ->hide();
    ui -> atLabel_Manhattan ->hide();

    ui-> atLabelQueens-> hide();
    ui-> QueensCrimeInfo-> hide();

    ui-> atLabelBrooklyn-> hide();
    ui-> BrooklynCrimeInfo-> hide();

}

StudentHousing::~StudentHousing()
{
    delete ui;
}

void StudentHousing::on_Manhattan1_clicked()
{
    QDesktopServices::openUrl(QUrl("https://ccnytowers.com/#FloorPlans", QUrl::TolerantMode));
}


void StudentHousing::on_Manhattan1_pressed()
{
    ui ->ManhattanCrimeInfo ->show();
    ui ->atLabel_Manhattan ->show();

}


void StudentHousing::on_Manhattan1_released()
{
    ui ->ManhattanCrimeInfo ->hide();
    ui -> atLabel_Manhattan ->hide();
}


void StudentHousing::on_Queens1_clicked()
{
    QDesktopServices::openUrl(QUrl("https://ccnytowers.com/#FloorPlans", QUrl::TolerantMode));
}


void StudentHousing::on_Queens1_pressed()
{
    ui-> atLabelQueens-> show();
    ui-> QueensCrimeInfo-> show();
}


void StudentHousing::on_Queens1_released()
{
    ui-> atLabelQueens-> hide();
    ui-> QueensCrimeInfo-> hide();
}


void StudentHousing::on_Brooklyn1_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.studenthousing.org/and/cuny/", QUrl::TolerantMode));
}


void StudentHousing::on_Brooklyn1_pressed()
{
    ui-> atLabelBrooklyn-> show();
    ui-> BrooklynCrimeInfo-> show();
}


void StudentHousing::on_Brooklyn1_released()
{
    ui-> atLabelBrooklyn-> hide();
    ui-> BrooklynCrimeInfo-> hide();
}

