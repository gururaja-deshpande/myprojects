#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void verify(QString, QString);
    void phone();
    void blueTooth();
    void music();
    void help();

    void universalSlot();
};

#endif // WIDGET_H
