#ifndef PIONEKZIELONY_H
#define PIONEKZIELONY_H
#include "pionek.h"
#include <QObject>

class PionekZielony : public QObject, public Pionek
{
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY xChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)

    int m_x;
    int m_y;
public:
    PionekZielony();

    int x() const;
    void setX(int a);
    int y() const;
    void setY(int a);
public slots:
    void ruch();
signals:
    void xChanged();
    void yChanged();

};

#endif // PIONEKZIELONY_H
