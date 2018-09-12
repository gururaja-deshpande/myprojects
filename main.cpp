#include "widget.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QPushButton>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QPushButton *button  = new QPushButton("Help");//Help Pushbutton
    QPushButton *bMusic  = new QPushButton("Music");

    QHBoxLayout *hLyt,*hLyt2;
    hLyt = new QHBoxLayout;
    hLyt2 = new QHBoxLayout;

    hLyt->addWidget(button);
    hLyt2->addWidget(bMusic);

    QPushButton *phone= new QPushButton("phone");
    QPushButton *bTooth= new QPushButton("BlueTooth");

//    QObject::connect(phone,SIGNAL(clicked(bool)),&w
//                     ,SLOT(phone()));
//    QObject::connect(bTooth,SIGNAL(clicked(bool)),&w
//                     ,SLOT(blueTooth()));
//    QObject::connect(bMusic,SIGNAL(clicked(bool)),&w
//                     ,SLOT(music()));
//    QObject::connect(button,SIGNAL(clicked(bool)),&w
//                     ,SLOT(music()));


    QObject::connect(button,SIGNAL(clicked(bool)),&w
                     ,SLOT(universalSlot()));

    QObject::connect(bMusic,SIGNAL(clicked(bool)),&w
                     ,SLOT(universalSlot()));

    QObject::connect(bTooth,SIGNAL(clicked(bool)),&w
                     ,SLOT(universalSlot()));

    QObject::connect(phone,SIGNAL(clicked(bool)),&w
                     ,SLOT(universalSlot()));

    phone->setObjectName("Phone");
    bTooth->setObjectName("BlueTooth");

    hLyt2->addWidget(phone);

    QVBoxLayout vLyt;

    vLyt.addLayout(hLyt);
    vLyt.addLayout(hLyt2);
    vLyt.addWidget(bTooth);
    w.setLayout(&vLyt);
    w.show();

    //w.universalSlot();
    return a.exec();
}
