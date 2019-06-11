#pragma once

#include <QtWidgets/QWidget>
//#include "ui_myslider.h"
#include <qslider.h>
#include <qlabel.h>

class MySlider : public QWidget
{
    Q_OBJECT

public:
    MySlider(QWidget *parent = Q_NULLPTR);

private slots:
    void valueChange1(int value);
    void valueChange2(int value);
    void valueChange3(int value);

private:
    //Ui::MySliderClass ui;

    QSlider *vslider[3];
    QSlider *hslider[3];
    QLabel *label[3];
};
