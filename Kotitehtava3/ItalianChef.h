#ifndef ItalianChef_H
#define ItalianChef_H
#include <iostream>
#include "Chef.h"

using namespace std;

//aliluokka
class ItalianChef: public Chef
{
public:

    ItalianChef(string h);


    string getName();


    void makePasta();

    /* Tehtävä 2
    int getArvot() const;
    void setArvot(int,int);
    */


private:
    int vesi;
    int jauhot;
};


#endif // ItalianChef_H
