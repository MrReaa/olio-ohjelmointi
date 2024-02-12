#include "Asunto.h"


Asunto::Asunto()
{
    cout <<"Asunto luotu"<<endl;
}
void Asunto::maarita(int asukas,int maara)
{

    asukasMaara = asukas;
    neliot = maara;

    cout <<"Asunto maaritetty asukkaita= "<<asukas<<" nelioita= "<< neliot<< endl;

}

double Asunto::laskeKulutus(double joku)
{
    /*
    cout <<"Asunnon kulutus, kun hinta="<<joku<<" on "<< joku*asukasMaara*neliot<<endl;
    */
    return joku*asukasMaara*neliot;
}



Asunto::~Asunto()
{

}
