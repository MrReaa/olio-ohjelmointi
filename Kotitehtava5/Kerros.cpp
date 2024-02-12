#include "Kerros.h"

Kerros::Kerros()
{
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
    cout<<"Kerros luotu"<<endl;
}
Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()

{

    cout<<"Maaritellaan 4kpl kerroksen asuntoja"<<endl;

    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

double Kerros::laskeKulutus(double hinta)
{
    double kerros_hinta = as1->laskeKulutus(hinta)+as2->laskeKulutus(hinta)+ as3->laskeKulutus(hinta)+ as2->laskeKulutus(hinta);
    return kerros_hinta;
}


