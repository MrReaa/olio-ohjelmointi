#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{

/*
 Tehtävä osa 1

    Chef ramsay("Gordon Ramsay");
    ramsay.makeSalad();
    ramsay.makeSoup();

    Chef joku_toinen("Anthony Bourdain");
    joku_toinen.makeSalad();
    joku_toinen.makeSoup();

*/

/* Tehtävä 2
    ItalianChef italiankokki("Mario",100,250);
    italiankokki.makePasta();
*/


    Chef kokki_jyrki("Jyrki");
    ItalianChef kokki_mario("Mario");

    kokki_jyrki.makeSalad();
    kokki_mario.makePasta();
    kokki_jyrki.makeSoup();





    return 0;
}
