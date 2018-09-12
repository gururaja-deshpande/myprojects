#ifndef LOGINCHECKER_H
#define LOGINCHECKER_H

#include <QObject>

class LoginChecker : public QObject
{
    Q_OBJECT
public:
    explicit LoginChecker(QObject *parent = 0);

signals:

public slots:

    void verify(QString, QString);
};

#endif // LOGINCHECKER_H
