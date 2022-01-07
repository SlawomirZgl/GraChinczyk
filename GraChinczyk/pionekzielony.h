#ifndef PIONEKZIELONY_H
#define PIONEKZIELONY_H
#include "pionek.h"
#include <QObject>

class PionekZielony : public QObject, public Pionek
{
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY xChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)
    int m_x;
    int m_y;
    int m_id;
public:
    PionekZielony();
    PionekZielony(int x, int y, int id);

    int x() const;
    void setX(int a);
    int y() const;
    void setY(int a);
    int id() const;
    void setId(int a);
public slots:
    void ruch(int x);
signals:
    void xChanged();
    void yChanged();
    void idChanged();

};

#endif // PIONEKZIELONY_H
