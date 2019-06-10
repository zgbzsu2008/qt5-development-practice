#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mytime.h"
#include <qdatetime.h>
#include <qdatetimeedit.h>

class MyTime : public QWidget
{
    Q_OBJECT

public:
    MyTime(QWidget *parent = Q_NULLPTR);

private:
    // Ui::MyTimeClass ui;
    QTimeEdit *qte;
};
