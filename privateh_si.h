#ifndef PRIVATEH_SI_H
#define PRIVATEH_SI_H

#include <QDialog>
#include "StatenIsland.h"

namespace Ui {
class privateh_SI;
}

class privateh_SI : public QDialog
{
    Q_OBJECT

public:
    explicit privateh_SI(QWidget *parent = nullptr);
    ~privateh_SI();
    void printData();

private:
    Ui::privateh_SI *ui;
    StatenIsland siInfo;
};

#endif // PRIVATEH_SI_H
