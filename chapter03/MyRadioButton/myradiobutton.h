#pragma once

#include <QtWidgets/QWidget>
//#include "ui_myradiobutton.h"
#include <qradiobutton.h>
#include <qbuttongroup.h>

class MyRadioButton : public QWidget
{
    Q_OBJECT

public:
    MyRadioButton(QWidget *parent = Q_NULLPTR);

private:
    //Ui::MyRadioButtonClass ui;
    QRadioButton *radio[6];
    QButtonGroup *group[2];
};
