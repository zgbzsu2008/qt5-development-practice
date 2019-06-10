#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mydate.h"
#include <qdatetime.h>
#include <qdatetimeedit.h>

class MyDate : public QWidget
{
    Q_OBJECT

public:
    MyDate(QWidget *parent = Q_NULLPTR);

private:
    //Ui::MyDateClass ui;
    QDateEdit *dateEdit[4];
};
