#include "pionekniebieski.h"

PionekNiebieski::PionekNiebieski()
{
    indexStart=10;
    indexStop=9;
}

PionekNiebieski::PionekNiebieski(int x, int y)
{
    setX(x);
    setY(y);
}
int PionekNiebieski::x() const
{
    return m_x;
}
int PionekNiebieski::y() const
{
    return m_y;
}

void PionekNiebieski::setX(int a)
{
    if(a != m_x){
        m_x = a;
        emit xChanged();
    }
}
void PionekNiebieski::setY(int a)
{
    if(a != m_y){
        m_y = a;
        emit yChanged();
    }
}

void PionekNiebieski::ruch()
{
   setX(m_x + 50);
   setY(m_y + 50);
}
