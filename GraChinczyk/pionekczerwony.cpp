#include "pionekczerwony.h"

PionekCzerwony::PionekCzerwony():Pionek()
{
    indexStart=0;
    indexStop=39;
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

void PionekCzerwony::ruch()
{
   setX(m_x + 50);
   setY(m_y + 50);
}
