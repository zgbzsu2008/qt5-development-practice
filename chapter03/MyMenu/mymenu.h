#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mymenu.h"

#include <qmenu.h>
#include <qmenubar.h>
#include <qlabel.h>

class MyMenu : public QWidget
{
    Q_OBJECT

public:
    MyMenu(QWidget *parent = Q_NULLPTR);


private slots:
    void trigerMenu(QAction *act);

private:
    // Ui::MyMenuClass ui;
    QMenu *menu[3];
    QMenuBar *menubar;
    QAction *act[5];
    QLabel *label;
};
