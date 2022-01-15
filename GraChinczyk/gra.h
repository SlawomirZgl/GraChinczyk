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
    /*{x,y}
    *poziom - >{175,175}{225,175}{275,175}{325,175}{375,175}{425,175}{475,175}{525,175}{575,175}{625,175}{675,175}
    *
    *pion - >  {675,175}{675,175}
    */
    Pole boxZielone[4];
    Pole boxZolte[4];
    Pole boxCzerwone[4];
    Pole boxNiebieskie[4];

    //pola startowe +10 pola konczace -1
  //  void stworzPole();
    int m_a;
public:
    static Kostka k;
    static Pionek* pionki[16];
    Gra();
    Q_INVOKABLE static void graj(int id);
    static int CzyZajete(int x, int y, int id);
    static void Wyrzuc(int id);

signals:
    void ruszaj(int x);


};

#endif // GRA_H
