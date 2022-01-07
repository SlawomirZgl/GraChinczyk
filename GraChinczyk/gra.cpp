#include "gra.h"
#include <QString>
#include <QDebug>

Gra::Gra()
{
    pionkiZielone[0] = new PionekZielony(100,100, 0);
    pionkiZielone[1] = new PionekZielony(200,100, 1);
    pionkiZielone[2] = new PionekZielony(300,100, 2);
    pionkiZielone[3] = new PionekZielony(400,100, 3);

}

void Gra::graj(int x, int y, int id)
{
  pionkiZielone[id]->ruch(1);
}
