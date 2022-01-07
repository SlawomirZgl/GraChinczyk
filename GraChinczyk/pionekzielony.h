#ifndef PIONEKZIELONY_H
#define PIONEKZIELONY_H
#include "pionek.h"
#include <QObject>

class PionekZielony : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)
    int m_x;
public:
    PionekZielony();

    int x() const;
    void setX(int a);
public slots:
    void ruch();
signals:
    void xChanged();

};

#endif // PIONEKZIELONY_H
