#include "Guerrier.h"

using namespace std;

Guerrier::Guerrier()
{
    //ctor
}

Guerrier::Guerrier(string nom) : Personnage(nom)
{

}

Guerrier::~Guerrier()
{
    //dtor
}

void Guerrier::sePresenter() const
{
   Personnage::sePresenter();
    cout << "Je suis un Guerrier redoutable." << endl;
}
