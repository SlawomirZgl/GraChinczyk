#include "pionekczerwony.h"

PionekCzerwony::PionekCzerwony():Pionek()
{
    indexStart=0;
    indexStop=39;
}
void PionekCzerwony::ruch(int liczba)
{

    if(liczba==6)
    {
        //tu musimy ogarnac wybor czy ruch czy pionek out
    }
        else
    {
        index+=liczba;


    }
    if (index>=indexStop)
    {
       this->doBoxu(liczba);
    }

}
void PionekCzerwony::doBoxu(int ruch)
{
    if(index>indexStop+4)
    {

    }
    else
    {

    }
}
