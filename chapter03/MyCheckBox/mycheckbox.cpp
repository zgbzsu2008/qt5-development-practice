#include "mycheckbox.h"
#include <qdebug.h>

MyCheckBox::MyCheckBox(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
    QString str1[3] = {"Game", "Office", "Develop"};
    QString str2[3] = {"Programming", "Qt", "OS"};

    int xpos = 30;
    int ypos = 30;

    for (int i = 0; i < 2; ++i) {
        chk_group[i] = new QButtonGroup(this);
    }

    for (int i = 0; i < 3; ++i) {
        execlusive[i] = new QCheckBox(str1[i], this);
        execlusive[i]->setGeometry(xpos, ypos, 100, 30);
        chk_group[0]->addButton(execlusive[i]);

        non_execlusive[i] = new QCheckBox(str2[i], this);
        non_execlusive[i]->setGeometry(xpos + 120, ypos, 100, 30); // 几何属性
        chk_group[1]->addButton(execlusive[i]);

        connect(execlusive[i], &QCheckBox::clicked, this, &MyCheckBox::chkChanged);
        ypos += 40;
    }

    chk_group[0]->setExclusive(false); // 单选
    chk_group[1]->setExclusive(true);
}

void MyCheckBox::chkChanged()
{
    for (int i = 0; i < 3; ++i) {
        if (execlusive[i]->checkState()) { // 是否选中
            qDebug("checkbox %d selected ", i + 1);
        }
    }
}
