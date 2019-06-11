#pragma once

#include <QtWidgets/QWidget>
#include "ui_mytoolbar.h"

#include <qtoolbar.h>

class MyToolBar : public QWidget
{
    Q_OBJECT

public:
    MyToolBar(QWidget *parent = Q_NULLPTR);

private slots:
    void triggered();

private:
    Ui::MyToolBarClass ui;
    QToolBar *toolbar;
    QAction *act[2];
};
