#ifndef PIONEKCZERWONY_H
#define PIONEKCZERWONY_H
#include "pionek.h"

class PionekCzerwony: public Pionek
{
public:
    PionekCzerwony();
    void ruch(int liczba);
    void doBoxu(int ruch);
};

#endif // PIONEKCZERWONY_H
