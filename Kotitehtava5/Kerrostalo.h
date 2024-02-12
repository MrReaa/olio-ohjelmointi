#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
#include "Katutaso.h"



using namespace std;

class Kerrostalo
{
private:
    Katutaso * eka;
    Kerros  * toka;
    Kerros * kolmas;
    Kerros * neljas;

public:
    double laskeKulutus(double);

    Kerrostalo();
    ~Kerrostalo();

};

#endif // KERROSTALO_H
