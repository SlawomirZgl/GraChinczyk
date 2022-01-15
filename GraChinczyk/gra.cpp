 #include "gra.h"
#include <QString>
#include <QDebug>
#include <qDebug>

Gra::Gra()
{
    pionki[0] = new PionekZielony(750,50, 0);
    pionki[1] = new PionekZielony(750,100, 1);
    pionki[2] = new PionekZielony(800,50, 2);
    pionki[3] = new PionekZielony(800,100, 3);
    pionki[4] = new PionekCzerwony(50,50, 4);
    pionki[5] = new PionekCzerwony(50,100, 5);
    pionki[6] = new PionekCzerwony(100,50, 6);
    pionki[7] = new PionekCzerwony(100,100, 7);
    pionki[8] = new PionekNiebieski(50,750, 8);
    pionki[9] = new PionekNiebieski(100,750, 9);
    pionki[10] = new PionekNiebieski(50,800, 10);
    pionki[11] = new PionekNiebieski(100,800, 11);
    pionki[12] = new PionekZolty(750,750, 12);
    pionki[13] = new PionekZolty(800,750, 13);
    pionki[14] = new PionekZolty(750,800, 14);
    pionki[15] = new PionekZolty(800,800, 15);

}

void Gra::graj(int id)
{
    pionki[id]->ruch(k.liczba());
}

int Gra::CzyZajete(int x, int y,int id)
{
    for(int i =0; i<16;i++)
    {
        if(x==Gra::pionki[i]->x() && y==Gra::pionki[i]->y() && i!=id )
            return Gra::pionki[i]->id();
    }
    return -1;
}

void Gra::Wyrzuc(int id)
{
  pionki[id]->setX(pionki[id]->indexStart);
  pionki[id]->setY(pionki[id]->indexStop);

}
