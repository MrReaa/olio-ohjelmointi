#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int arvattava_luku;
int pelaajan_arvaus;
bool running = true;
int maxnum;
int arvauksien_maara;

int randomlukugeneraattori(int);
int arvaus();
void tarkistus(int, int);
int game(int);


int main(){

    cout << "Syota korkein etsittava luku: ";
    cin >> maxnum;

    arvauksien_maara = game(maxnum);
    cout << "Arvauksien maara oli "<< arvauksien_maara<<"\n";

    return 0;
}

int game(int maxnum){

    arvattava_luku = randomlukugeneraattori(maxnum);

    while(running == true){
        arvauksien_maara = arvauksien_maara + 1;
        pelaajan_arvaus = arvaus();
        tarkistus(arvattava_luku, pelaajan_arvaus);
    }


    return arvauksien_maara;
}

int randomlukugeneraattori(int maksimi){

    srand(time(NULL));
    int satunnaisluku = rand() % maksimi;
    if(satunnaisluku == 0){
        satunnaisluku = maksimi;
    }

    return satunnaisluku;

}

int arvaus(){

    cout << "Syota arvaus: ";
    cin >> pelaajan_arvaus;

    return pelaajan_arvaus;
}

void tarkistus(int arvattava_luku, int pelaajan_arvaus){

    if(arvattava_luku == pelaajan_arvaus){
        cout << "Arvaamasi luku oli oikein! \n";
        running = false;
    }

    else if(arvattava_luku<pelaajan_arvaus){
        cout << "Arvattava luku on pienempi.\n";
    }
    else if(arvattava_luku>pelaajan_arvaus){
        cout << "Arvattava luku on suurempi.\n";
    }

}
