#include "Chef.h"

Chef::Chef(string name)
{
    cout<<"Chef "<<name<<" konstruktori" << endl;
    setName(name);
}
Chef::~Chef()
{
    cout << "Chef "<<name<<" destruktori"<< endl;
}



void Chef :: makeSalad()
{
    cout <<"Chef "<<name<< " makes salad"<< endl;
}

void Chef :: makeSoup()
{
    cout <<"Chef "<<name<< " makes soup"<< endl;
}





void Chef::setName(const string &newName)
{
    name = newName;
}

string Chef::getName() const
{
    return name;
}

