#ifndef Chef_H
#define Chef_H
#include <iostream>


using namespace std;

//yliluokka
class Chef
{
public:

    Chef(string x);
    ~Chef();

    void makeSalad();
    void makeSoup();

    void setName(const string &newName);

    string getName() const;

protected:
    string name;
};

#endif // Chef
