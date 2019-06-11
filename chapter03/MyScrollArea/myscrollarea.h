#pragma once

#include <QtWidgets/QWidget>
//#include "ui_myscrollarea.h"
#include <qscrollarea.h>
#include <qlabel.h>

class MyScrollArea : public QWidget
{
    Q_OBJECT

public:
    MyScrollArea(QWidget *parent = Q_NULLPTR);

private:
    //Ui::MyScrollAreaClass ui;
    QLabel *label;
    QScrollArea *area;
};
