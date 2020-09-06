#include <iostream>
#include <string> // Obligatoire pour pouvoir utiliser les objets string

using namespace std;


int main()
{
    string maChaine0("Bonjour !");
    cout << maChaine0 << endl;

    maChaine0 = "Bien le bonjour !"; // Changement de la valeur
    cout << maChaine0 << endl;

    // CONCATENATION

    string chaine1("Bonjour !");
    string chaine2("Comment allez-vous ?");
    string chaine3;

    chaine3 = chaine1 + " " + chaine2; // 3... 2... 1... Concaténatioooooon
    cout << chaine3 << endl;

    // COMPARAIASONS

    string chaine4("Bonjour !");
    string chaine5("Comment allez-vous ?");

    if (chaine4 == chaine5) // Faux
    {
        cout << "Les chaines sont identiques." << endl;
    }
    else
    {
        cout << "Les chaines sont differentes." << endl;
    }

    string maChaine("Bonjour !");
    cout << "Longueur de la chaine : " << maChaine.size() << endl;

    string chaine6("Bonjour !");
    chaine6.erase();
    cout << "La chaine contient : " << chaine6 << endl;

    cout << maChaine.substr(3) << endl; // substring
    cout << maChaine.substr(3,2) << endl;
    cout << maChaine[3] << endl;

    return 0;
}
