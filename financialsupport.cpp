#include "financialsupport.h"
#include "ui_financialsupport.h"

FinancialSupport::FinancialSupport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinancialSupport)
{
    ui->setupUi(this);

    readFile();
    printFile();
}

FinancialSupport::~FinancialSupport()
{
    delete ui;
}

void FinancialSupport::readFile(){

    QFile fsFile("FinancialSupportList.txt");

    if(fsFile.open(QIODevice::Truncate | QIODevice::WriteOnly)){

        QTextStream stream(&fsFile);
        stream<<"<b>~SNYCHA Resident Scholarship</b>\n";
        stream<<"Description: This scholarship is available to NYCHA residents who are enrolled full-time at a City University of New York (CUNY) college. The scholarship provides $2,500 per year to help cover housing costs.\n";
        stream<<"Link: \n\n";

        stream<<"<b>~Living in Communities (LINC) Rental Assistance Program</b>\n";
        stream<<"Description: This program provides rental assistance to low-income families and individuals in NYC. LINC participants can receive up to $1,200 per month in rental assistance.\n";
        stream<<"Link: \n\n";

        stream<<"<b>~The Emergency Grants Program</b>\n";
        stream<<"Description: This program provides assistance to students in good academic standing who are facing unforeseen events, resulting in a financial emergency that jeopardizes their ability to persist at City College.\n";
        stream<<"Link: \n\n";

        stream<<"<b>~XXX Estate Offer %15 Off for BMCC Students</b>\n";
        stream<<"Description: XXX agency offer %15 percent off for your first two rent if you rent a room from them. Ends in 12/23\n";
        stream<<"Link: \n\n";


    }
    else{
        std::cout<< "File cannot open";
    }
}

void FinancialSupport::printFile(){

    QFile fsFile("FinancialSupportList.txt");

    if(fsFile.open(QIODevice::ReadOnly)){

        QTextStream stream(&fsFile);
        QString FileData;

        while(stream.atEnd() == false)
        {
            FileData += stream.readLine() + "<br>";
        }

        ui -> textLabel -> setWordWrap(true);
        ui -> textLabel -> setText(FileData);

    }

}
