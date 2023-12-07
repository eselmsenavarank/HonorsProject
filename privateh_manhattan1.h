#ifndef PRIVATEH_MANHATTAN1_H
#define PRIVATEH_MANHATTAN1_H

#include <QDialog>
#include <QString>
#include "Manhattan.h"

namespace Ui {
class PrivateH_Manhattan1;
}

class PrivateH_Manhattan1 : public QDialog
{
    Q_OBJECT

public:
    explicit PrivateH_Manhattan1(QWidget *parent = nullptr);
    ~PrivateH_Manhattan1();
    void printCrimeInfo();

private slots:


private:
    Ui::PrivateH_Manhattan1 *ui;
    Manhattan mInfo;
};

#endif // PRIVATEH_MANHATTAN1_H
