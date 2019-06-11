#include "myslider.h"

MySlider::MySlider(QWidget *parent)
    : QWidget(parent)
{
    // ui.setupUi(this);
    int xpos = 20;
    int ypos = 20;

    for (int i = 0; i < 3; ++i) {
        vslider[i] = new QSlider(Qt::Vertical, this);
        vslider[i]->setGeometry(xpos, 20, 30, 80);
        vslider[i]->setRange(0, 100);
        vslider[i]->setValue(10 * (i + 1));
        label[i] = new QLabel(QString("%1").arg(vslider[i]->value()), this);
        label[i]->setGeometry(xpos + 10, 100, 30, 40);
        xpos += 30;

        hslider[i] = new QSlider(Qt::Horizontal, this);
        hslider[i]->setGeometry(130, ypos, 80, 30);
        hslider[i]->setRange(0, 100);
        hslider[i]->setValue(10 * (i + 1));
        ypos += 40;
    }

    connect(vslider[0], &QSlider::valueChanged, this, &MySlider::valueChange1);
    connect(vslider[1], &QSlider::valueChanged, this, &MySlider::valueChange2);
    connect(vslider[2], &QSlider::valueChanged, this, &MySlider::valueChange3);
}

void MySlider::valueChange1(int value)
{
    label[0]->setText(QString("%1").arg(value));
    hslider[0]->setValue(vslider[0]->value());
}

void MySlider::valueChange2(int value)
{
    label[1]->setText(QString("%1").arg(value));
    hslider[1]->setValue(vslider[1]->value());
}

void MySlider::valueChange3(int value)
{
    label[2]->setText(QString("%1").arg(value));
    hslider[2]->setValue(vslider[2]->value());
}
