#include <iostream>
#include "statique.h"
#include "Personnage.h"

using namespace std;

//Initialiser l'attribut en dehors de toute fonction ou classe (espace global)
int statique::monAttribut = 5;

int main()
{
    statique::maMethode();

    //On crée deux personnages
    Personnage goliath("Goliath le tenebreux");
    Personnage lancelot("Lancelot le preux");

    //Et on consulte notre compteur
    cout << "Il y a actuellement " << Personnage::nombreInstances() << " personnages en jeu." << endl;

    return 0;
}
