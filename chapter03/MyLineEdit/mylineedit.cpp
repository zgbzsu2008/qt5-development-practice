#include "mylineedit.h"

MyLineEdit::MyLineEdit(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    int ypos = 30;
    for (int i = 0; i < 5; ++i) {
        edit[i] = new QLineEdit(this);
        edit[i]->setGeometry(10, ypos, 200, 30);
        ypos += 40;
        connect(edit[i], &QLineEdit::textChanged, this, &MyLineEdit::textChanged);
    }

    label = new QLabel("Text: ", this);
    label->setGeometry(10, ypos, 200, 30);

    edit[1]->setEchoMode(QLineEdit::Normal);
    edit[2]->setEchoMode(QLineEdit::NoEcho);
    edit[3]->setEchoMode(QLineEdit::Password);
    edit[4]->setEchoMode(QLineEdit::PasswordEchoOnEdit);
}

void MyLineEdit::textChanged(QString str)
{
    label->setText(str.prepend("QLineEdit Text : "));
}
