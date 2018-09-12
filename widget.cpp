#include "widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}


Widget::~Widget()
{

}

void Widget::verify(QString, QString)
{

}

void Widget::phone()
{
    qDebug() <<Q_FUNC_INFO<< "Phone is connected"<<endl;
}

void Widget::blueTooth()
{
    qDebug() << "Phone is connected"<<endl;
}

void Widget::music()
{
    qDebug() << "Music is connected"<<endl;
    qDebug() << "Music is my passion"<<endl;
}


void Widget::help()
{
    qDebug() << "Help is connected"<<endl;
}

void Widget::universalSlot()
{
    QObject *obj = this->sender();
    if(obj==NULL) {
        qDebug() << Q_FUNC_INFO << "is connected"<< endl;
        return;
    }
    QPushButton *b = (QPushButton*)(obj);
    QPushButton *b = qobject_cast<QPushButton*>(obj);
    b->setText("Done");

    qDebug() << Q_FUNC_INFO << "is connected"<<obj->objectName() << endl;
}
