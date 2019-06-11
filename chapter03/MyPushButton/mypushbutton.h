#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mypushbutton.h"
#include <qpushbutton.h>
#include <qfocusframe.h>

class MyPushButton : public QWidget
{
    Q_OBJECT

public:
    MyPushButton(QWidget *parent = Q_NULLPTR);

private slots:
    void clicked();
    void pressed();
    void released();

private:
    // Ui::MyPushButtonClass ui;
    QPushButton *btn[3];
    QFocusFrame *btn_frame;
};
