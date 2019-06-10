#pragma once

#include <QtWidgets/QWidget>
//#include "ui_myspinbox.h"
#include <qspinbox.h>
class MySpinBox : public QWidget
{
    Q_OBJECT

public:
    MySpinBox(QWidget *parent = Q_NULLPTR);

private slots:
    void valueChange();
    void value_doubleChange();

private:
    // Ui::MySpinBoxClass ui;
    QSpinBox *spin;
    QDoubleSpinBox *dspin;
};
