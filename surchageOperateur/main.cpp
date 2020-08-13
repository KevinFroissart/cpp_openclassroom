#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{

    /*Duree chrono; // Pour stocker 0 heure, 0 minute et 0 seconde
    Duree chrono(5); // Pour stocker 5 heures, 0 minute et 0 seconde
    Duree chrono(5, 30); // Pour stocker 5 heures, 30 minutes et 0 seconde
    Duree chrono(0, 12, 55); // Pour stocker 0 heure, 12 minutes et 55 secondes*/

    Duree duree1(0, 10, 28), duree2(0, 10, 28);

    if (duree1 == duree2)
        cout << "Les durees sont identiques" << endl;
    else
        cout << "Les durees sont differentes" << endl;

    if (duree1 != duree2)
        cout << "Les durees sont differentes" << endl;
    else
        cout << "Les durees sont identiques" << endl;

    Duree duree3(0, 10, 28), duree4(4, 2, 13);

    if (duree3 < duree4)
        cout << "La premiere duree est plus petite" << endl;
    else
        cout << "La premiere duree n'est pas plus petite" << endl;

    Duree resultat;

    duree1.afficher();
    cout << " et " << endl;
    duree2.afficher();

    duree1 += duree2;

    cout << " donne " << endl;
    duree1.afficher();

    Duree duree5(1, 45, 50), duree6(1, 15, 50), duree7(0, 8, 20);
    Duree resultat2;

    duree5.afficher();
    cout << "+" << endl;
    duree6.afficher();
    cout << "+" << endl;
    duree7.afficher();

    resultat2 = duree5 + duree6 + duree7;

    cout << "=" << endl;
    resultat2.afficher();

    cout << duree1 << " et " << duree2 << endl;
    cout << duree1 + duree2 << endl;

    return 0;
}
