#ifndef PIONEK_H
#define PIONEK_H
#include <QObject>

class Pionek
{
protected:
    int index;
    bool wGrze;
    int indexStart;
    int indexStop;
    bool wBoxie;

public:
    Pionek()
    {
        wBoxie=false;
        wGrze=false;
        index=0;
    }    
  //   virtual void ruch(int liczba)=0;
    int dajIndex(){return  index;}

    bool czyWGrze(){return wGrze;}
    void wyrzuc();
//    virtual void doBoxu(int ruch)=0;
//    virtual void ruchWBoxie()=0;




};
#endif // PIONEK_H
