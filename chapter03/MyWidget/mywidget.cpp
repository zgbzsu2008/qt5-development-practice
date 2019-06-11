#include "mywidget.h"
#include <qdebug.h>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void MyWidget::paintEvent(QPaintEvent *event)
{
    QImage image("resources/3.jpg");
    QPainter p(this);
    p.drawPixmap(0, 0, QPixmap::fromImage(image.scaled(320, 200, Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));
    p.end();

    return QWidget::paintEvent(event);
}

void MyWidget::resizeEvent(QResizeEvent *event)
{
    qDebug("width: %d, height %d", width(), height());

    return QWidget::resizeEvent(event);
}

void MyWidget::mousePressEvent(QMouseEvent *event)
{
    qDebug("[Mouse Press] x, y : %d, %d", event->x(), event->y());

    return QWidget::mousePressEvent(event);
}

void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug("[Mouse Release] x, y : %d, %d", event->x(), event->y());

    return QWidget::mouseReleaseEvent(event);
}

void MyWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug("[Mouse Double Click] x, y : %d, %d", event->x(), event->y());

    return QWidget::mouseDoubleClickEvent(event);
}

void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
    qDebug("[Mouse Move] x, y : %d, %d", event->x(), event->y());

    return QWidget::mouseMoveEvent(event);
}

void MyWidget::wheelEvent(QWheelEvent *event)
{
    int angle = event->angleDelta().y();
    qDebug("[Wheel Event] angle: %d", angle);

    return QWidget::wheelEvent(event);
}

void MyWidget::enterEvent(QEvent *event)
{
    qDebug("[Mouse Enter Widget]");

    return QWidget::enterEvent(event);
}

void MyWidget::leaveEvent(QEvent *event)
{
    qDebug("[Mouse Leave Widget]");

    return QWidget::leaveEvent(event);
}

void MyWidget::closeEvent(QCloseEvent *event)
{
    qDebug("[Close Widget]");

    return QWidget::closeEvent(event);
}

void MyWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A) {
        if (event->modifiers()) {
            qDebug("A"); // shift + 'a' = 'A', no caps lock
        } else {
            qDebug("a");
        }
    }

    return QWidget::keyPressEvent(event);
}

void MyWidget::keyReleaseEvent(QKeyEvent *event)
{
    qDebug("Key Release : %d",event->key());

    return QWidget::keyReleaseEvent(event);
}

void MyWidget::focusInEvent(QFocusEvent *event)
{
    qDebug("Focuse In");

    return QWidget::focusInEvent(event);
}

void MyWidget::focusOutEvent(QFocusEvent *event)
{
    qDebug("Focuse Out");

    return QWidget::focusOutEvent(event);
}
