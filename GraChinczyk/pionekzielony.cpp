#include "pionekzielony.h"
#include "gra.h"
PionekZielony::PionekZielony()
{
   indexStart=20;
       indexStop=19;
}

PionekZielony::PionekZielony(int x, int y, int id)
{
    indexStart=20;
    indexStop=19;
    setX(x);
    setY(y);
    setId(id);
}


void PionekZielony::ruch(int liczba)
{
   if((m_x == 750 || m_x == 800) && ( m_y == 50 || m_y == 100)){
       //pole startowe
       setX(475);
       setY(175);
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
       int id=Gra::CzyZajete(m_x,m_y,m_id);
       qDebug()<<id;
       if(id>3)
       {
           Gra::Wyrzuc(id);
       }
   }
}

