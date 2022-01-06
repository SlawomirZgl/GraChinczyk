#ifndef GRA_H
#define GRA_H
#include "QList"
#include "pole.h"

#include <QQmlApplicationEngine>

class Gra
{
//    Pole plansza[40];
//    Pole boxZielone[4];
//    Pole boxZolte[4];
//    Pole boxCzerwone[4];
//    Pole boxNiebieskie[4];
    //pola startowe +10 pola konczace -1

    void stworzPole();
public:
    Gra();
    void generujPlansze(QQmlApplicationEngine &engine);

};

#endif // GRA_H
