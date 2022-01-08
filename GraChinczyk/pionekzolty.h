#ifndef PIONEKZOLTY_H
#define PIONEKZOLTY_H
#include "pionek.h"

class PionekZolty : public Pionek
{
public:
    Q_OBJECT
    Q_PROPERTY(int y READ y WRITE setY NOTIFY xChanged)
    Q_PROPERTY(int x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)

public:
    PionekZolty();
    PionekZolty(int x, int y,int id);
    void ruch(int x);

};

#endif // PIONEKZOLTY_H
