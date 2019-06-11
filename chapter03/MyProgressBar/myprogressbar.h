#pragma once

#include <QtWidgets/QWidget>
//#include "ui_myprogressbar.h"
#include <qprogressbar.h>

class MyProgressBar : public QWidget
{
    Q_OBJECT

public:
    MyProgressBar(QWidget *parent = Q_NULLPTR);

private:
    //Ui::MyProgressBarClass ui;
    QProgressBar *progress[4];
};
