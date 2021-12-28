#ifndef POLE_H
#define POLE_H
#include "pionek.h"

#include <QAbstractListModel>

class Pole
{

    Pionek* m_pionek;

public:
    Pole();
    void wstawPionek(Pionek *pionek);
};

#endif // POLE_H
