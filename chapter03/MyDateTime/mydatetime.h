#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mydatetime.h"
#include <qdatetime.h>
#include <qdatetimeedit.h>

class MyDateTime : public QWidget
{
    Q_OBJECT

public:
    MyDateTime(QWidget *parent = Q_NULLPTR);

private:
    // Ui::MyDateTimeClass ui;
    QDateTimeEdit *qde;
};
