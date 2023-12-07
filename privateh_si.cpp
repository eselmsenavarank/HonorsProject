#include "privateh_si.h"
#include "ui_privateh_si.h"

privateh_SI::privateh_SI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::privateh_SI)
{
    printData();

}

privateh_SI::~privateh_SI()
{
    delete ui;
}

void privateh_SI::printData(){

    ui->setupUi(this);

    QString infoToShowSI;
    infoToShowSI += "<b>Borough Name:</b> " + siInfo.getBoroName() + "<br>";
    infoToShowSI += "<b>Crime Index:</b> " + siInfo.getCrimeIndex() + "<br>";
    infoToShowSI += "<b>Report Date: </b>" + QString::number(siInfo.getReportDate()) + "<br>";
    infoToShowSI += siInfo.highestCrime();
    ui->labelSIOutput->setText(infoToShowSI);
}
