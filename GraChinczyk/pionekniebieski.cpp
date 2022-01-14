#include "pionekniebieski.h"
#include "gra.h"
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


void PionekNiebieski::ruch(int liczba)
{
    if((m_x == 50 || m_x == 100) && ( m_y == 750 || m_y == 800)){
        //pole startowe
        setX(375);
        setY(675);
    }
    else{
        for(int i=0; i < liczba; i++){
            //prawy gorny
            if(m_x == 675 && m_y == 175){
                m_addX = 0;
                m_addY = 50;
            }
            //prawy dolny
            if(m_x == 675 && m_y == 675){
                m_addX = -50;
                m_addY = 0;
            }
            //lewy dolny
            if(m_x==175 && m_y==675){
                m_addX = 0;
                m_addY = -50;
            }
            //lewy gorny
            if(m_x == 175 && m_y== 175){
                m_addX = 50;
                m_addY = 0;
            }
            setX(m_x + m_addX);
            setY(m_y + m_addY);
        }
        int id=Gra::CzyZajete(m_x,m_y);
        qDebug()<<id;
        if(id<8 && id>11)
        {
            Gra::Wyrzuc(id);
        }
    }
}
