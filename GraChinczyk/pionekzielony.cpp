#include "pionekzielony.h"

PionekZielony::PionekZielony()
{
   indexStart=20;
       indexStop=19;
}

PionekZielony::PionekZielony(int x, int y, int id)
{
    indexStart=20;
    indexStop=19;
    setX(x);
    setY(y);
    setId(id);
}


void PionekZielony::ruch(int x)
{
   setX(m_x + 50*x);
   setY(m_y + 50*x);
}

