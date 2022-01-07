#include "pionekczerwony.h"

PionekCzerwony::PionekCzerwony():Pionek()
{
    indexStart=0;
    indexStop=39;
}

PionekCzerwony::PionekCzerwony(int x, int y)
{
    setX(x);
    setY(y);
}
int PionekCzerwony::x() const
{
    return m_x;
}
int PionekCzerwony::y() const
{
    return m_y;
}

void PionekCzerwony::setX(int a)
{
    if(a != m_x){
        m_x = a;
        emit xChanged();
    }
}
void PionekCzerwony::setY(int a)
{
    if(a != m_y){
        m_y = a;
        emit yChanged();
    }
}

void PionekCzerwony::ruch(int x)
{
   setX(m_x + 50*x);
   setY(m_y + 50*x);
}
