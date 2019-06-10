#include "mydial.h"

MyDial::MyDial(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
    int xpos = 30;
    for (int i = 0; i < 3; ++i)
    {
        dial[i] = new QDial(this);
        dial[i]->setRange(0, 100);
        dial[i]->setGeometry(xpos, 20, 100, 100);
        connect(dial[i], &QDial::valueChanged, this, &MyDial::changeData);
        xpos += 110;
    }
    dial[0]->setNotchesVisible(true);
}

void MyDial::changeData()
{
    for (int i = 0; i < 3; ++i) {
        qDebug("Dial[%d] value : %d", i, dial[i]->value());
    }
}
