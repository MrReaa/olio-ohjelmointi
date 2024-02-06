#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto{
private:
    int asukasMaara;
    int neliot;


public:


    Asunto();
    ~Asunto();
    void maarita(int, int);
    double laskeKulutus(double);


};

#endif // ASUNTO_H
