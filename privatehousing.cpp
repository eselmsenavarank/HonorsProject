#include "privatehousing.h"
#include "ui_privatehousing.h"

#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QPixmap>



privateHousing::privateHousing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::privateHousing)
{

    ui->setupUi(this);

    QString infoToShowSI;
    infoToShowSI += "<b>Borough Name:</b> " + siInfo.getBoroName() + "<br>";
    infoToShowSI += "<b>Crime Index:</b> " + siInfo.getCrimeIndex() + "<br>";
    infoToShowSI += "<b>Report Date: </b>" + QString::number(siInfo.getReportDate()) + "<br>";
    infoToShowSI += siInfo.highestCrime();
    ui->StatenIslandCrimeInfo->setText(infoToShowSI);

    QString infoToShowBronx;
    infoToShowBronx += "<b>Borough Name:</b> " + bInfo.getBoroName() + "<br>";
    infoToShowBronx += "<b>Crime Index:</b> " + bInfo.getCrimeIndex() + "<br>";
    infoToShowBronx += "<b>Report Date: </b>" + QString::number(bInfo.getReportDate()) + "<br>";
    infoToShowBronx += bInfo.highestCrime();
    ui->BronxCrimeInfo->setText(infoToShowBronx);



    connect(ui->Manhattan1, &QPushButton::clicked, this, &privateHousing::handleManhattanButtonClick);
    connect(ui->Manhattan1, &QPushButton::pressed, this, &privateHousing::handleManhattanButtonPressed);
    connect(ui->Manhattan1, &QPushButton::released, this, &privateHousing::handleManhattanButtonRelease);

    ui -> atLabel_1 ->hide();
    ui -> manhattanCrimeInfo ->hide();

    ui -> atLabel_SI ->hide();
    ui -> StatenIslandCrimeInfo ->hide();

    ui -> atLabel_Bronx ->hide();
    ui -> BronxCrimeInfo ->hide();



}

privateHousing::~privateHousing()
{
    delete ui;
}



void privateHousing::handleManhattanButtonClick()
{
    pg1 = new PrivateH_Manhattan1(this);
    pg1 -> show();
}

void privateHousing::handleManhattanButtonPressed()
{
    ui -> atLabel_1 ->show();
    ui -> manhattanCrimeInfo ->show();

}

void privateHousing::handleManhattanButtonRelease()
{
    ui -> atLabel_1 ->hide();
    ui -> manhattanCrimeInfo ->hide();
}



void privateHousing::on_StatenIsland1_pressed()
{
    ui -> atLabel_SI ->show();
    ui -> StatenIslandCrimeInfo ->show();

}


void privateHousing::on_StatenIsland1_released()
{
    ui -> atLabel_SI ->hide();
    ui -> StatenIslandCrimeInfo ->hide();
}


void privateHousing::on_Manhattan1_3_pressed()
{
    ui -> atLabel_Bronx ->show();
    ui -> BronxCrimeInfo ->show();

}


void privateHousing::on_Manhattan1_3_released()
{
    ui -> atLabel_Bronx ->hide();
    ui -> BronxCrimeInfo ->hide();
}


void privateHousing::on_StatenIsland1_clicked()
{
    pg2 = new privateh_SI(this);
    pg2 -> show();

}

