#include "myprogressbar.h"

MyProgressBar::MyProgressBar(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    int ypos = 30;
    for (int i = 0; i < 2; ++i) {
        progress[i] = new QProgressBar(this);
        progress[i]->setRange(0, 100);
        progress[i]->setValue(10 * (i + 1));
        progress[i]->setOrientation(Qt::Horizontal);
        progress[i]->setGeometry(10, ypos, 200, 30);
        ypos += 40;
    }

    int xpos = 30;
    for (int i = 2; i < 4; ++i) {
        progress[i] = new QProgressBar(this);
        progress[i]->setRange(0, 100);
        progress[i]->setValue(10 * (i + 1));
        progress[i]->setOrientation(Qt::Vertical);
        progress[i]->setGeometry(xpos, ypos, 30, 200);
        xpos += 40;
    }

    progress[3]->setInvertedAppearance(true);
}
