#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLayout>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void myQuit();
};

#endif // WIDGET_H
