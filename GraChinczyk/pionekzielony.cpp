#include "pionekzielony.h"

PionekZielony::PionekZielony()
{
//    indexStart=20;
    //    indexStop=19;
}

PionekZielony::PionekZielony(int x, int y, int id)
{
    setX(x);
    setY(y);
    setId(id);
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

int PionekZielony::id() const
{
    return m_id;
}

void PionekZielony::setId(int a)
{
    if(a != m_id){
        m_id = a;
        emit idChanged();
    }
}

void PionekZielony::ruch(int x)
{
   setX(m_x + 50*x);
   setY(m_y + 50*x);
}

