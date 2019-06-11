#pragma once

#include <QtWidgets/QWidget>
#include "ui_mywidget.h"

#include <qpainter.h>
#include <qevent.h>
#include <qlabel.h>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseDoubleClickEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void wheelEvent(QWheelEvent *event) override;

    virtual void paintEvent(QPaintEvent *event) override;
    virtual void resizeEvent(QResizeEvent *event) override;
    virtual void enterEvent(QEvent *event) override;
    virtual void leaveEvent(QEvent *event) override;
    virtual void closeEvent(QCloseEvent *event) override;

    virtual void keyPressEvent(QKeyEvent *event) override;
    virtual void keyReleaseEvent(QKeyEvent *event) override;
    virtual void focusInEvent(QFocusEvent *event) override;
    virtual void focusOutEvent(QFocusEvent *event) override;
public:
    MyWidget(QWidget *parent = Q_NULLPTR);

private:
    Ui::MyWidgetClass ui;
};
