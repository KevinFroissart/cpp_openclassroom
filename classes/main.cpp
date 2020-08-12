#include <iostream>
#include <string>
#include "Personnage.h" //Ne pas oublier

using namespace std;

int main()
{
    //Création des personnages
    Personnage david, goliath("Épée aiguisée", 20);
    //Personnage david(goliath); //On crée david en copiant tous les attributs de goliath

    //Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    //Temps mort ! Voyons voir la vie de chacun…
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}
