#include "mytabwidget.h"

#include <qpushbutton.h>
#include <qdebug.h>

MyTabWidget::MyTabWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    tab = new QTabWidget(this);
    tab->setGeometry(10, 10, 300, 200);

    QWidget *w[3];
    QPushButton *btn[3];
    for (int i = 0; i < 3; ++i) {
        w[i] = new QWidget(tab);
        tab->addTab(w[i], QString("widget %1").arg(i));

        for (int j = 0; j < 3; ++j) {
            btn[j] = new QPushButton(QString("Button %1").arg(j + 1), w[i]);
            btn[j]->setGeometry(10 + i * 100, 30 + j * 40, 80, 30);
        }
    }

    connect(tab, &QTabWidget::currentChanged, this, &MyTabWidget::currentTab);
}

void MyTabWidget::currentTab(int index)
{
    qDebug() << index << tab->tabText(index);
}