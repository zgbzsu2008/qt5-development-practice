#include "myradiobutton.h"

MyRadioButton::MyRadioButton(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    for (int i = 0; i < 2; ++i) {
        group[i] = new QButtonGroup(this);
    }

    QString str[6] = {"NetBook", "Handset", "Tablet", "In-Vehicle", "Smart TV", "Media Phone"};
    int ypos = 30;
    for (int i = 0; i < 3; ++i) {
        radio[i] = new QRadioButton(str[i], this);
        radio[i]->setGeometry(10, ypos, 150, 30);
        ypos += 40;

        group[0]->addButton(radio[i]);
    }

    ypos = 30;
    for (int i = 3; i < 6; ++i) {
        radio[i] = new QRadioButton(str[i], this);
        radio[i]->setGeometry(180, ypos, 150, 30);
        ypos += 40;

         group[1]->addButton(radio[i]);
    }
}
