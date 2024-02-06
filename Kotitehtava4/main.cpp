#include "Kerrostalo.h"

#include <iostream>

using namespace std;

int main()
{

    /* Tehtävä 2
    Katutaso Katu;
    Katu.maaritaAsunnot();
    Katu.Kerros::maaritaAsunnot();

    Katu.laskeKulutus(1);
    */

    Kerrostalo kokeilu;
    kokeilu.eka_().maaritaAsunnot();
    kokeilu.toka_().maaritaAsunnot();
    kokeilu.kolmas_().maaritaAsunnot();
    kokeilu.neljas_().maaritaAsunnot();

    kokeilu.laskeKulutus(1);

    return 0;
}
