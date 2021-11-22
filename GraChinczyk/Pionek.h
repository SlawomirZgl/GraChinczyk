#ifndef PIONEK_H
#define PIONEK_H

#endif // PIONEK_H
class Pionek
{
    int x;
    int y;
    bool wGrze;
public:
     virtual void ruch(int liczba)=0;
    int dajX(){return  x;}
    int dajY(){return  y;}
    bool czyWGrze(){return wGrze;}



};
