#include "mymenu.h"

MyMenu::MyMenu(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    menubar = new QMenuBar(this);

    menu[0] = new QMenu("File");
    menu[0]->addAction("Edit");
    menu[0]->addAction("View");
    menu[0]->addAction("Tools");

    act[0] = new QAction("New", this);
    act[0]->setShortcut(Qt::CTRL | Qt::Key_A);
    act[0]->setStatusTip("This is a new menu");

    act[1] = new QAction("Open", this);
    act[1]->setCheckable(true);

    menu[1] = new QMenu("Save");
    menu[1]->addAction(act[0]);
    menu[1]->addAction(act[1]);

    menu[2] = new QMenu("Print");
    menu[2]->addAction("Page Setup");
    menu[2]->addMenu(menu[1]);

    menubar->addMenu(menu[0]);
    menubar->addMenu(menu[2]);

    label = new QLabel("selected menu : ",this);
    label->setGeometry(10, 100, 200, 30);
    connect(menubar, &QMenuBar::triggered, this, &MyMenu::trigerMenu);
}

void MyMenu::trigerMenu(QAction *act)
{
    label->setText(QString("selected menu : %1").arg(act->text()));
}
