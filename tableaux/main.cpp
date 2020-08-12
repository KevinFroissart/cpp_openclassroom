#include <iostream>
#include "fonctions.h"
using namespace std;

//Une fonction recevant un tableau d'entiers en argument
void fonction(vector<int> a)
{
    //…
}

//Une fonction recevant un tableau d'entiers en argument
void fonction(vector<int> const& a)
{
    //…
}

int main()
{
    int const nombreNotes(6);
    double notes[nombreNotes];

    notes[0] = 12.5;
    notes[1] = 19.5;  //Bieeeen !
    notes[2] = 6.;    //Pas bien !
    notes[3] = 12;
    notes[4] = 14.5;
    notes[5] = 15;

    double average= moyenne(notes, nombreNotes);

    cout << "Votre moyenne est : " << average << endl;

    // TABLEAUX DYNAMIQUES

    vector<int> tableau(5, 3);  //Crée un tableau de 5 entiers valant tous 3
    vector<string> listeNoms(12, "Sans nom");
    //Crée un tableau de 12 strings valant toutes « Sans nom »

    vector<double> tableau2; //Crée un tableau de 0 nombre à virgule

    tableau.push_back(8);
    //On ajoute une 6ème case au tableau qui contient la valeur 8
    tableau.pop_back();
    //On supprime la dernière case du tableaux

    int const taille(tableau.size());
    //Une variable qui contient la taille du tableau
    //La taille peut varier mais la valeur de cette variable ne changera pas
    //On utilise donc une constante
    //À partir d'ici, la constante 'taille' vaut donc 5

    vector<vector<int> > grille;
    grille.push_back(vector<int>(5));   //On ajoute une ligne de 5 cases à notre grille
    grille.push_back(vector<int>(3,4)); //On ajoute une ligne de 3 cases contenant chacune le nombre 4 à notre grille
    grille[0].push_back(8);     //Ajoute une case contenant 8 à la première ligne du tableau
    grille[2][3] = 9;     //Change la valeur de la cellule (2,3) de la grille

    // STRING = TABLEAUX

    string nomUtilisateur("Julien");
    cout << "Vous etes " << nomUtilisateur << "." <<endl;

    nomUtilisateur[0] = 'L';  //On modifie la première lettre
    nomUtilisateur[2] = 'c';  //On modifie la troisième lettre

    cout << "Ah non, vous etes " << nomUtilisateur << "!" << endl;

    string texte("Portez ce whisky au vieux juge blond qui fume.");  //46 caractères
    cout << "Cette phrase contient " << texte.size() << " lettres." << endl;

    string prenom("Albert");

    string nom("Einstein");

    string total;    //Une chaîne vide
    total += prenom; //On ajoute le prénom à la chaîne vide
    total += " ";    //Puis un espace
    total += nom;    //Et finalement le nom de famille

    cout << "Vous vous appelez " << total << "." << endl;

    return 0;
}
