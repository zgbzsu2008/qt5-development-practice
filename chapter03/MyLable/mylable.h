#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mylable.h"
#include <qlabel.h>
#include <qlcdnumber.h>

class MyLable : public QWidget
{
    Q_OBJECT

public:
    MyLable(QWidget *parent = Q_NULLPTR);

private:
    // Ui::MyLableClass ui;
    QLabel *label[2];
    QLCDNumber *lcd[2];
};
