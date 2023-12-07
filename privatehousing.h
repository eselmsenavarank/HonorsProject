#ifndef PRIVATEHOUSING_H
#define PRIVATEHOUSING_H


#include <QDialog>
#include "Manhattan.h"
#include "StatenIsland.h"
#include "Bronx.h"
#include "privateh_manhattan1.h"
#include "privateh_si.h"




namespace Ui {
class privateHousing;
}



class privateHousing : public QDialog
{
    Q_OBJECT

public:
    explicit privateHousing(QWidget *parent = nullptr);
    ~privateHousing();


private slots:



    void handleManhattanButtonClick();
    void handleManhattanButtonRelease();
    void handleManhattanButtonPressed();


    void on_StatenIsland1_pressed();
    void on_StatenIsland1_released();

    void on_Manhattan1_3_pressed();
    void on_Manhattan1_3_released();

    void on_StatenIsland1_clicked();

private:
    Ui::privateHousing *ui;
    Manhattan manhattan;
    PrivateH_Manhattan1 *pg1;
    //Manhattan mInfo;
    StatenIsland siInfo;
    Bronx bInfo;
    privateh_SI *pg2;


};

#endif // PRIVATEHOUSING_H
