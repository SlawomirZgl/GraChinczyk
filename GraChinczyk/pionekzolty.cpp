#include "pionekzolty.h"

PionekZolty::PionekZolty()
{
    indexStart=30;
    indexStop=29;
}

PionekZolty::PionekZolty(int x, int y)
{
    setX(x);
    setY(y);
}

int PionekZolty::x() const
{
    return m_x;
}
int PionekZolty::y() const
{
    return m_y;
}

void PionekZolty::setX(int a)
{
    if(a != m_x){
        m_x = a;
        emit xChanged();
    }
}
void PionekZolty::setY(int a)
{
    if(a != m_y){
        m_y = a;
        emit yChanged();
    }
}

void PionekZolty::ruch()
{
   setX(m_x + 50);
   setY(m_y + 50);
}

