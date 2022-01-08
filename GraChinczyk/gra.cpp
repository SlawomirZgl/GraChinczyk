#include "gra.h"
#include <QString>
#include <QDebug>

Gra::Gra()
{
    pionkiZielone[0] = new PionekZielony(100,100, 0);
    pionkiZielone[1] = new PionekZielony(200,100, 1);
    pionkiZielone[2] = new PionekZielony(300,100, 2);
    pionkiZielone[3] = new PionekZielony(400,100, 3);
    pionkiZielone[4] = new PionekCzerwony(100,200, 4);
    pionkiZielone[5] = new PionekCzerwony(200,200, 5);
    pionkiZielone[6] = new PionekCzerwony(300,200, 6);
    pionkiZielone[7] = new PionekCzerwony(400,200, 7);
    pionkiZielone[8] = new PionekNiebieski(100,300, 8);
    pionkiZielone[9] = new PionekNiebieski(200,300, 9);
    pionkiZielone[10] = new PionekNiebieski(300,300, 10);
    pionkiZielone[11] = new PionekNiebieski(400,300, 11);
    pionkiZielone[12] = new PionekZolty(100,400, 12);
    pionkiZielone[13] = new PionekZolty(200,400, 13);
    pionkiZielone[14] = new PionekZolty(300,400, 14);
    pionkiZielone[15] = new PionekZolty(400,400, 15);

}

void Gra::graj(int x, int y, int id)
{
  pionkiZielone[id]->ruch(k.liczba());
}
