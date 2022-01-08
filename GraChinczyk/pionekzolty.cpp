#include "pionekzolty.h"

PionekZolty::PionekZolty()
{
    indexStart=30;
    indexStop=29;
}

PionekZolty::PionekZolty(int x, int y, int id)
{
    indexStart=20;
    indexStop=19;
    setX(x);
    setY(y);
    setId(id);
}


void PionekZolty::ruch(int x)
{
   setX(m_x + 50*x);
   setY(m_y + 50*x);
}
