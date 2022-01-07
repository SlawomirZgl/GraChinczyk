#include "pionekzielony.h"

PionekZielony::PionekZielony()
{
//    indexStart=20;
//    indexStop=19;
}



int PionekZielony::x() const
{
    return m_x;
}
int PionekZielony::y() const
{
    return m_y;
}

void PionekZielony::setX(int a)
{
    if(a != m_x){
        m_x = a;
        emit xChanged();
    }
}
void PionekZielony::setY(int a)
{
    if(a != m_y){
        m_y = a;
        emit yChanged();
    }
}

void PionekZielony::ruch()
{
   setX(m_x + 50);
   setY(m_y + 50);
}

