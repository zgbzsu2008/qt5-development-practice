#include "myspinbox.h"
#include <qdebug.h>

MySpinBox::MySpinBox(QWidget *parent)
    : QWidget(parent)
{
    // ui.setupUi(this);

    spin = new QSpinBox(this);
    spin->setRange(10, 300);
    spin->setValue(150);
    spin->setGeometry(10, 30, 100, 30);
    spin->setPrefix("$ ");
    spin->setSingleStep(2);
    connect(spin, (void (QSpinBox::*)(int))(&QSpinBox::valueChanged), this, &MySpinBox::valueChange);

    dspin = new QDoubleSpinBox(this);
    dspin->setRange(10.0, 300.0);
    dspin->setSuffix(" mm");
    dspin->setSingleStep(3.33);
    dspin->setValue(12.34);
    dspin->setGeometry(120, 30, 100, 30);
    connect(dspin, (void (QDoubleSpinBox::*)(double))(&QDoubleSpinBox::valueChanged), this,
            &MySpinBox::value_doubleChange);
}

void MySpinBox::valueChange()
{
    qDebug() << "Change value : " << spin->value();
}

void MySpinBox::value_doubleChange()
{
    qDebug() << "Change value : " << dspin->value();
}
