#ifndef PIONEKZOLTY_H
#define PIONEKZOLTY_H
#include "pionek.h"

class PionekZolty : public QObject, public Pionek
{
public:
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY xChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)

    int m_x;
    int m_y;
public:
    PionekZolty();
    PionekZolty(int x, int y);

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

#endif // PIONEKZOLTY_H
