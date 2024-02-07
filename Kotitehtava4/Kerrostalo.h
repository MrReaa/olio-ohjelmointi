#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
#include "Katutaso.h"



using namespace std;

class Kerrostalo
{
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
    Kerros neljas;

public:
    double laskeKulutus(double);

    Kerrostalo();
    ~Kerrostalo();


    /* Jos halutaisiin kutsua eka jne. main laitettaisiin nämä.
    Katutaso& eka_() { return eka; }
    Kerros& toka_() { return toka; }
    Kerros& kolmas_() { return kolmas; }
    Kerros& neljas_() { return neljas; }
    */

};

#endif // KERROSTALO_H
