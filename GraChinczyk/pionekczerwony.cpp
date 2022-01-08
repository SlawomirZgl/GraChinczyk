#include "pionekczerwony.h"

PionekCzerwony::PionekCzerwony():Pionek()
{
    indexStart=0;
    indexStop=39;
}

PionekCzerwony::PionekCzerwony(int x, int y, int id)
{
    indexStart=0;
    indexStop=39;
    setX(x);
    setY(y);
    setId(id);
}


void PionekCzerwony::ruch(int x)
{
   setX(m_x + 50*x);
   setY(m_y + 50*x);
}
