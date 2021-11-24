#include "kostka.h"

Kostka::Kostka()
{

}
int Kostka::rzut()
{
    int los=QRandomGenerator::global()->bounded(1, 7);
    return los;
}
