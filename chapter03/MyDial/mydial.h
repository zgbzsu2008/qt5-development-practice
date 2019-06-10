#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mydial.h"
#include <qdial.h>

class MyDial : public QWidget
{
    Q_OBJECT

public:
    MyDial(QWidget *parent = Q_NULLPTR);

private slots:
    void changeData();

private:
    //Ui::MyDialClass ui;
    QDial *dial[3];
};
