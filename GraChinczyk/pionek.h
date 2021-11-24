#ifndef PIONEK_H
#define PIONEK_H

class Pionek
{
    int index;
    bool wGrze;
    int indexStart;
    int indexStop;
public:
     virtual void ruch(int liczba)=0;
    int dajIndex(){return  index;}

    bool czyWGrze(){return wGrze;}
    void wyrzuc();



};
#endif // PIONEK_H
