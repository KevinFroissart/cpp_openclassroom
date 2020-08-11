#include <iostream>
#include <cmath> // pour des calculs plus complexes
using namespace std;

int main()
{
    double a(0), b(0); //Déclaration des variables utiles

    cout << "Bienvenue dans le programme d'addition a+b !" << endl;

    cout << "Donnez une valeur pour a : "; //On demande le premier nombre
    cin >> a;

    cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
    cin >> b;

    double const resultat(a + b);

    cout << a << " + " << b << " = " << resultat << endl; // On affiche le résultat

    // ----------------------

    a = 0, b = 0; //Déclaration des variables utiles

    cout << "Bienvenue dans le programme de multiplication a*b !" << endl;

    cout << "Donnez une valeur pour a : "; //On demande le premier nombre
    cin >> a;

    cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
    cin >> b;

    double const resultat2(a * b);

    cout << a << " * " << b << " = " << resultat2 << endl; // On affiche le résultat

    // ------------

    a = 0, b = 0;
    double c(0); //Déclaration des variables utiles

    cout << "Bienvenue dans le programme d'opération complexe a*b+c !" << endl;

    cout << "Donnez une valeur pour a : "; //On demande le premier nombre
    cin >> a;

    cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
    cin >> b;

    cout << "Donnez une valeur pour c : "; //On demande le deuxième nombre
    cin >> c;

    double const resultat3(a * b + c);

    cout << a << " * " << b  << " + " << c << " = " << resultat3 << endl; // On affiche le résultat

    // ----------------

    int a2(0), b2(0);

    cout << "Bienvenue dans le programme de division quotient + reste!" << endl;

    cout << "Donnez une valeur pour a : "; //On demande le premier nombre
    cin >> a2;

    cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
    cin >> b2;

    double const resultat4(a2 / b2);
    double const resultat5(a2 % b2);

    cout << "Quotien de " << a2 << " / " << b2 << " = " << resultat4 << endl; // On affiche le résultat
    cout << "Reste de " << a2 << " / " << b2 << " = " << resultat5 << endl;

    // FONCTIONS CMATH SQRT

    double const nombre(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat6;         //Une case mémoire pour stocker le résultat

    resultat6 = sqrt(nombre);  //On effectue le calcul !

    cout << "La racine de " << nombre << " est " << resultat6 << endl;

    // PUISSANCES

    double const a3(4);
    double const b3(5);
    double const resultat7 = pow(a3,b3);

    cout << a3 << " puissance " << b3 << " = " << resultat7 << endl;


    return 0;
}
