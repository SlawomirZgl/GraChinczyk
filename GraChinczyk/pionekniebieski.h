#ifndef PIONEKNIEBIESKI_H
#define PIONEKNIEBIESKI_H
#include "pionek.h"

class PionekNiebieski : public QObject , public Pionek
{
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY xChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)

    int m_x;
    int m_y;
public:
    PionekNiebieski();
    PionekNiebieski(int x, int y);

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

#endif // PIONEKNIEBIESKI_H
