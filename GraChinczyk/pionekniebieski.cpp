#include "pionekniebieski.h"

PionekNiebieski::PionekNiebieski()
{
    indexStart=10;
    indexStop=9;
}

PionekNiebieski::PionekNiebieski(int x, int y, int id)
{
    indexStart=10;
    indexStop=9;
    setX(x);
    setY(y);
    setId(id);
}


void PionekNiebieski::ruch(int x)
{
   setX(m_x + 50*x);
   setY(m_y + 50*x);
}
