#include <iostream>

using namespace std;

int main()
{
    int nbEnfants(2);

    if (nbEnfants == 0)
    {
        cout << "Eh bien alors, vous n'avez pas d'enfant ?" << endl;
    }
    else if (nbEnfants == 1)
    {
        cout << "Alors, c'est pour quand le deuxieme ?" << endl;
    }
    else if (nbEnfants == 2)
    {
        cout << "Quels beaux enfants vous avez la !" << endl;
    }
    else
    {
        cout << "Bon, il faut arreter de faire des gosses maintenant !" << endl;
    }

    // SWITCH

    switch (nbEnfants)
    {
        case 0:
            cout << "Eh bien alors, vous n'avez pas d'enfant ?" << endl;
            break;

        case 1:
            cout << "Alors, c'est pour quand le deuxieme ?" << endl;
            break;

        case 2:
            cout << "Quels beaux enfants vous avez la !" << endl;
            break;

        default:
            cout << "Bon, il faut arreter de faire des gosses maintenant !" << endl;
            break;
    }

    // CONDITIONS AVEC BOOLEAN

    bool adulte(true);

    if (adulte)
    {
        cout << "Vous etes un adulte !" << endl;
    }

    // CONDITIONS COMPLEXES

    if (adulte && nbEnfants >= 1) ; // ET
    if (nbEnfants == 1 || nbEnfants == 2) ; // OU
    if (!adulte) ; // NON

    // BOUCLES

    int nbEnfants2(-1); // Nombre négatif pour pouvoir entrer dans la boucle

    while (nbEnfants < 0)
    {
        cout << "Combien d'enfants avez-vous ?" << endl;
        cin >> nbEnfants2;
    }

    cout << "Merci d'avoir indique un nombre d'enfants correct. Vous en avez " << nbEnfants2 << endl;

    int nbEnfants3(0);

    do
    {
        cout << "Combien d'enfants avez-vous ?" << endl;
        cin >> nbEnfants3;
    } while (nbEnfants3 < 0);

    cout << "Merci d'avoir indique un nombre d'enfants correct. Vous en avez " << nbEnfants3 << endl;

    int compteur(0);

    for (compteur = 0 ; compteur < 10 ; compteur++)
    {
        cout << compteur << endl;
    }

    for (int compteur2(0) ; compteur2 < 10 ; compteur2++)
    {
        cout << compteur2 << endl;
    }



    cout << "Fin du programme" << endl;
    return 0;
}
