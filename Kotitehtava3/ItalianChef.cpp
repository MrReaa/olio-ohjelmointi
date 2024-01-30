#include "ItalianChef.h"



ItalianChef::ItalianChef(string name):Chef(name)
{
    cout<<"Chef "<<name<<" konstruktori" << endl;

    /* Tehtävä 2
    setArvot(vesi,jauhot);
    */

}



void ItalianChef :: makePasta()
{
    cout <<"Chef "<<name<<" makes pasta"<<endl;

/*Tehtävä 2
    cout <<"Chef "<<name<<" makes pasta with special resipe"<<endl;
    cout <<"Chef "<<name<<" users jauhot = "<<jauhot<<endl;
    cout <<"Chef "<<name<<" users vesi = "<<vesi<<endl;
*/
}



string ItalianChef::getName()
{
        return name;
}


/* Tehtävä 2

void ItalianChef::setArvot(int newVesi, int newJauhot){
        vesi = newVesi;
        jauhot = newJauhot;
}

int ItalianChef::getArvot()const{
    return vesi, jauhot;

}
*/
