#ifndef FINANCIALSUPPORT_H
#define FINANCIALSUPPORT_H

#include <QDialog>
#include <QFile>
#include <QString>
#include <QDir>
#include <QDebug>
#include <QTextStream>

#include <iostream>

namespace Ui {
class FinancialSupport;
}

class FinancialSupport : public QDialog
{
    Q_OBJECT

public:
    explicit FinancialSupport(QWidget *parent = nullptr);
    ~FinancialSupport();
    void printFile();
    void readFile();

private:
    Ui::FinancialSupport *ui;
};

#endif // FINANCIALSUPPORT_H
