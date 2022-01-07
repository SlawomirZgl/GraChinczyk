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

void PionekZielony::setX(int a)
{
    if(a != m_x){
        m_x = a;
        emit xChanged();
    }
}

void PionekZielony::ruch()
{
   m_x += 50;
}

