#ifndef GRA_H
#define GRA_H
#include "kostka.h"
#include "pole.h"
#include <QObject>
#include "pionekzielony.h"
#include "pionekczerwony.h"
#include "pionekniebieski.h"
#include "pionekzolty.h"

class Gra : public QObject
{
    Q_OBJECT
//    Pole plansza[40];
//    Pole boxZielone[4];
//    Pole boxZolte[4];
//    Pole boxCzerwone[4];
//    Pole boxNiebieskie[4];
    static int m_tura;

public:
    static Kostka m_kostka;
    static Pionek* m_pionki[16];
    Q_INVOKABLE static int getTura();
    static void NastepnyGracz();

    Gra();
    Q_INVOKABLE static void graj(int id);
    static int CzyZajete(int x, int y, int id);
    static void Wyrzuc(int id);
};

#endif // GRA_H
