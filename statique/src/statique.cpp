#include "statique.h"

using namespace std;

statique::statique()
{
    //ctor
}

statique::~statique()
{
    //dtor
}

void statique::maMethode() //Ne pas remettre 'static' dans l'implémentation
{
    cout << "Bonjour !" << endl;
}
