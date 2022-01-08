#ifndef PIONEKNIEBIESKI_H
#define PIONEKNIEBIESKI_H
#include "pionek.h"

class PionekNiebieski : public Pionek
{
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY xChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)
public:
    PionekNiebieski();
    PionekNiebieski(int x, int y,int id);
    void ruch(int x);

};

#endif // PIONEKNIEBIESKI_H
