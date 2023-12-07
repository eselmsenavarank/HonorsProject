#ifndef STUDENTHOUSING_H
#define STUDENTHOUSING_H

#include <QDialog>
#include <QDesktopServices>
#include "Queens.h"
#include "Manhattan.h"
#include "Brooklyn.h"

namespace Ui {
class StudentHousing;
}

class StudentHousing : public QDialog
{
    Q_OBJECT

public:
    explicit StudentHousing(QWidget *parent = nullptr);
    ~StudentHousing();

private slots:
    void on_Manhattan1_clicked();

    void on_Manhattan1_pressed();

    void on_Manhattan1_released();

    void on_Queens1_clicked();

    void on_Queens1_pressed();

    void on_Queens1_released();

    void on_Brooklyn1_clicked();

    void on_Brooklyn1_pressed();

    void on_Brooklyn1_released();

private:
    Ui::StudentHousing *ui;
    Manhattan mInfo;
    Queens q;
    Brooklyn bInfo;
};

#endif // STUDENTHOUSING_H
