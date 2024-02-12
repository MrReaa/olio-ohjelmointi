#include "Katutaso.h"

Katutaso::Katutaso()
{
    as1 = new Asunto();
    as2 = new Asunto();
    cout<<"Katutaso luotu"<<endl;

}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
}

void Katutaso::maaritaAsunnot()
{

    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);



}

double Katutaso::laskeKulutus(double hinta)
{
    double katutaso_hinta = as1->laskeKulutus(hinta)+as2->laskeKulutus(hinta);
    /*
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = "<<hinta<<" on "<<katutaso_hinta+kerros_hinta<<endl;
    */

    return katutaso_hinta;
}

