#ifndef GRA_H
#define GRA_H
#include "pole.h"
#include <QObject>

class Gra : public QObject
{
    Q_OBJECT
//    Pole plansza[40];
//    Pole boxZielone[4];
//    Pole boxZolte[4];
//    Pole boxCzerwone[4];
//    Pole boxNiebieskie[4];
    //pola startowe +10 pola konczace -1
  //  void stworzPole();
    int m_a;
public:
    Gra();
    Q_INVOKABLE void graj(int x, int y);

signals:
    void ruszaj();


};

#endif // GRA_H
