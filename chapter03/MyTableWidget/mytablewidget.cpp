#include "mytablewidget.h"
#include <qpushbutton.h>
#include <qdebug.h>

MyTableWidget::MyTableWidget(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
    
    tab = new QTabWidget(this);
    tab->setGeometry(10, 10, 320, 240);
    QWidget *browser_tab = new QWidget;
    QWidget *users_tab = new QWidget;
    tab->addTab(browser_tab, "Browser");
    tab->addTab(users_tab, "Users");

    QString btn_str[3] = {"Button 1", "Button 2", "Button 3"};
    QPushButton *btn[3];
    int ypos = 30;
    for (int i = 0; i < 3; ++i) {
        btn[i] = new QPushButton(btn_str[i], browser_tab);
        btn[i]->setGeometry(10, ypos, 100, 40);
        ypos += 50;
    }

    connect(tab, &QTabWidget::currentChanged, this, &MyTableWidget::currentTab);
}

void MyTableWidget::currentTab(int index)
{
    qDebug() << "current tab index : " << index << " name : " << tab->tabText(index);
}
