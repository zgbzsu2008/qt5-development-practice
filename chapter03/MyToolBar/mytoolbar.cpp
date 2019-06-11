#include "mytoolbar.h"
#include <qdebug.h>

MyToolBar::MyToolBar(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    toolbar = new QToolBar(this);
    act[0] = new QAction(QIcon("resources/1.png"), "Browser", this);
    act[1] = new QAction(QIcon("resources/8.png"), "calendar", this);

    act[0]->setShortcut(Qt::Key_Control | Qt::Key_E);
    act[0]->setToolTip("This is a tooltip.");
    connect(act[0], &QAction::triggered, this, &MyToolBar::triggered);

    for (int i = 0; i < 2; ++i) {
        toolbar->addAction(act[i]);
    }

    toolbar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
}

void MyToolBar::triggered()
{
    qDebug() << "ToolButton clicked.";
}
