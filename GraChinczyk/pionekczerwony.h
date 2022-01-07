#ifndef PIONEKCZERWONY_H
#define PIONEKCZERWONY_H
#include "pionek.h"

class PionekCzerwony: public QObject , public Pionek
{
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY xChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)

    int m_x;
    int m_y;
public:
    PionekCzerwony();

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

#endif // PIONEKCZERWONY_H
