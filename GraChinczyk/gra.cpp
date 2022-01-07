#include "gra.h"
#include <QString>
#include <QDebug>


Gra::Gra()
{
}

void Gra::graj(int x, int y)
{
    qDebug()<<x;
    qDebug()<<y;
    emit ruszaj();
}
