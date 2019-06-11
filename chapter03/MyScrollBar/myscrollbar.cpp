#include "myscrollbar.h"

MyScrollBar::MyScrollBar(QWidget *parent)
    : QWidget(parent)
{
    // ui.setupUi(this);

    int xpos = 10;
    int ypos = 50;
    for (int i = 0; i < 3; ++i) {
        vscrollbar[i] = new QScrollBar(Qt::Vertical, this);
        vscrollbar[i]->setRange(0, 100);
        vscrollbar[i]->setGeometry(xpos, 30, 20, 200);

        label[i] = new QLabel(QString("%1").arg(vscrollbar[i]->value()), this);
        label[i]->setGeometry(xpos + 2, 220, 30, 30);
        xpos += 50;

        hscrollbar[i] = new QScrollBar(Qt::Horizontal, this);
        hscrollbar[i]->setRange(0, 100);
        hscrollbar[i]->setGeometry(150, ypos, 200, 20);
        ypos += 30;
    }

    connect(vscrollbar[0], &QScrollBar::valueChanged, this, &MyScrollBar::valueChanged1);
    connect(vscrollbar[1], &QScrollBar::valueChanged, this, &MyScrollBar::valueChanged2);
    connect(vscrollbar[2], &QScrollBar::valueChanged, this, &MyScrollBar::valueChanged3);
}

void MyScrollBar::valueChanged1(int value)
{
    label[0]->setText(QString("%1").arg(value));
    hscrollbar[0]->setValue(vscrollbar[0]->value());
}

void MyScrollBar::valueChanged2(int value)
{
    label[1]->setText(QString("%1").arg(value));
    hscrollbar[1]->setValue(vscrollbar[1]->value());
}

void MyScrollBar::valueChanged3(int value)
{
    label[2]->setText(QString("%1").arg(value));
    hscrollbar[2]->setValue(vscrollbar[2]->value());
}
