#include <iostream> // Inclut la bibliothèque iostream (affichage de texte)
#include <string> // Nécéssaire pour faire des Strings

using namespace std; // Indique quel espace de noms on va utiliser

/*
Fonction principale "main"
Tous les programmes commencent par la fonction main
*/
int main()
{
    cout << "Hello world!" << endl; // Affiche un message

    // VARIABLES ---

    int ageUtilisateur(16);
    int nombreAmis(432);      //Le nombre d'amis de l'utilisateur

    double pi(3.14159);

    bool estMonAmi(true);    //Cet utilisateur est-il mon ami ?

    char lettre('a');
    string phrase("Ceci est une phrase"), mot("mot");

    // VARIABLES non déclarées

    string nomJoueur;
    int nombreJoueurs;
    bool aGagne;

    // Affichage d'une variable

    int ageUtilisateur2(20);
    cout << "Votre age est : " << ageUtilisateur2 << endl;

    // REFERENCES

    int ageUtilisateur3(18); //Une variable pour contenir l'âge de l'utilisateur

    int& maReference(ageUtilisateur3); //Et une référence sur la variable 'ageUtilisateur'

    //On peut utiliser à partir d'ici
    //'ageUtilisateur' ou 'maReference' indistinctement
    //Puisque ce sont deux étiquettes de la même case en mémoire

    maReference++;

    cout << "Vous avez " << ageUtilisateur3 << "  ans. (via variable)" << endl;
    //On affiche, de la manière habituelle

    ageUtilisateur3++;

    cout << "Vous avez " << maReference << " ans. (via reference)" << endl;
    //Et on affiche en utilisant la référence

    // Modifier la référence ou la variable de base reviens à la même chose,
    // elles sont liées, les deux changent

    // AFFECTATION

    int a(4), b(5); //Déclaration de deux variables

    cout << "a vaut : " << a << " et b vaut : " << b << endl;

    cout << "Affectation !" << endl;
    a = b; //Affectation de la valeur de 'b' à 'a'.

    cout << "a vaut : " << a << " et b vaut : " << b << endl;

    // CIN COUT Demande de variable > console

    /*cout << "Quel age avez-vous ?" << endl;

    int ageUtilisateur(0); //On prepare une case mémoire pour stocker un entier

    cin >> ageUtilisateur; //On fait entrer un nombre dans cette case

    cout << "Vous avez " << ageUtilisateur << " ans !" <<  endl; //Et on l'affiche*/

    cout << "Combien vaut pi ?" << endl;
    double piUtilisateur(-1.); //On crée une case mémoire pour stocker unnombre réel
    cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur

    cin.ignore(); // sinon l'ordi ne demande rien avec getline()

    cout << "Quel est votre nom ?" << endl;
    string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenir une chaine de caractères
    getline(cin, nomUtilisateur); //On remplit cette case avec toute la ligne que l'utilisateur a écrit

    cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pivaut " << piUtilisateur << "." << endl;

    // CONSTANTES

    string const motDePasse("wAsTZsaswQ"); //Le mot de passe secret
    double const pi(3.14);
    unsigned int const pointsDeVieMaximum(100); //Le nombre maximal de points de vie

    // INCREMENTATION

    double nombre(5.3);
    nombre += 4.2;       //'nombre' vaut maintenant 9.5
    nombre *= 2.;        //'nombre' vaut maintenant 19
    nombre -= 1.;        //'nombre' vaut maintenant 18
    nombre /= 3.;        //'nombre' vaut maintenant 6
    nombre++; ++nombre;
    nombre--; --nombre;

    return 0; // Termine la fonction main et donc le programme
}
