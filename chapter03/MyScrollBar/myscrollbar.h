#pragma once

#include <QtWidgets/QWidget>
//#include "ui_myscrollbar.h"
#include <qscrollbar.h>
#include <qlabel.h>

class MyScrollBar : public QWidget
{
    Q_OBJECT

public:
    MyScrollBar(QWidget *parent = Q_NULLPTR);

private slots:
    void valueChanged1(int value);
    void valueChanged2(int value);
    void valueChanged3(int value);

private:
    //Ui::MyScrollBarClass ui;
    QScrollBar *vscrollbar[3];
    QScrollBar *hscrollbar[3];
    QLabel *label[3];
};
