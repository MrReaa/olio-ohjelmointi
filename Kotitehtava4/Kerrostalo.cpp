#include "Kerrostalo.h"





Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kerros1_hinta = eka.laskeKulutus(hinta);
    double kerros2_hinta = toka.laskeKulutus(hinta);
    double kerros3_hinta = kolmas.laskeKulutus(hinta);
    double kerros4_hinta = neljas.laskeKulutus(hinta);
    cout<<"Kerrostalon kulutus, = "<<kerros1_hinta+kerros2_hinta+kerros3_hinta+kerros4_hinta<<endl;

    return 0;
}