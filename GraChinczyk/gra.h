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
    Pole plansza[40];
    Pole boxZielone[4];
    Pole boxZolte[4];
    Pole boxCzerwone[4];
    Pole boxNiebieskie[4];

    //pola startowe +10 pola konczace -1
  //  void stworzPole();
    int m_a;
public:
    Kostka k;
    Pionek* pionkiZielone[16];
    Gra();
    Q_INVOKABLE void graj(int x, int y, int id);

signals:
    void ruszaj(int x);


};

#endif // GRA_H
