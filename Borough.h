#ifndef BOROUGH_H
#define BOROUGH_H

#include <QString>
#include <string>
#include <QtWidgets>
#include <iostream>
using namespace std;



class Borough{

private:
    double crimeIndex;
    QString boroName;
    int reportDate;

public:

    Borough(int crm, int dt, QString bn){
        crimeIndex = crm;
        boroName = bn;
        reportDate = dt;


    }

    //setters

    void setCrimeIndex(double index){
        crimeIndex = index;

    }

    void setBoroName(QString name){
        boroName = name;

    }

    void setReportDate(int date){
        reportDate = date;

    }




    //getters

    QString getCrimeIndex(){
       QString ci = QString::number(crimeIndex);
        return ci;

    }

    QString getBoroName(){
        return boroName;

    }

    int getReportDate(){
        return reportDate;

    }

};
#endif
