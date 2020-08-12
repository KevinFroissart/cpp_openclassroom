#include <iostream>
#include "math.h"
using namespace std;


// EN C++/C on met les fonctions avant le main ou dans un autre fichier -> math.cpp


int addition(int a, int b)
{
    return a+b;
}

double multiplication(double a, double b, double c)
{
    return a*b*c;
}

// FONCTION sans arguments

string demanderNom()
{
     cout << "Entrez votre nom : ";
     string nom;
     cin >> nom;
     return nom;
}

// FONCTIONS qui ne renvoient rien

void direBonjour()
{
    cout << "Bonjour !" << endl;
    //Comme rien ne ressort, il n'y a pas de return !
}

double carre(double x)
{
    return x*x;
}


void dessineRectangle(int l, int h)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ajouteDeuxE(int a)
{
    a+=2;
    return a;
}

int ajouteDeuxEt(int& a) //Notez le petit & !!!
{
    a+=2;
    return a;
}


void echange(double& a, double& b)
{
    double temporaire(a); //On sauvegarde la valeur de 'a'
    a = b;                //On remplace la valeur de 'a' par celle de 'b'
    b = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
}

// REFERENCES CONSTANTES

void f1(string texte)  //Implique une copie coûteuse de 'texte'
{
}

void f2(string& texte)  //Implique que la fonction peut modifier 'texte'
{
}

void f3(string const& texte)  //Pas de copie et pas de modification possible
{
}


// VALEURS par défaut


// Prototype de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes);
//voir apres le main

// Prototype avec les valeurs par défaut
int nombreDeSecondes2(int heures, int minutes = 0, int secondes = 0);

//int nombreDeSecondes(int heures = 0, int minutes, int secondes);
//Erreur, les paramètres par défaut doivent être à droite

int nombreDeSecondes3(int secondes, int minutes, int heures = 0);
//OK

int nombreDeSecondes4(int heures = 0, int minutes = 0, int secondes = 0);
// TOUT facultatif


int main()
{
    int a(2),b(2);
    cout << "Valeur de a : " << a << endl;
    cout << "Valeur de b : " << b << endl;
    b = ajouteDeux(b); //Appel de la fonction
    cout << "Valeur de a : " << a << endl;
    cout << "Valeur de b : " << b << endl;
    string nom = demanderNom();
    cout << nom << endl;
    int c(5);
    cout << c << "² = " << carre(c) << endl;

    int largeur, hauteur;
    cout << "Largeur du rectangle : ";
    cin >> largeur;
    cout << "Hauteur du rectangle : ";
    cin >> hauteur;

    dessineRectangle(largeur, hauteur);


    int nombre3(4), resultat2, nombre4(4), resultat3;
    resultat2 = ajouteDeuxE(nombre3);
    //resultat3 = ajouteDeuxEt(nombre4);

    cout << "Le nombre original vaut : " << nombre3 << endl;
    cout << "Le resultat vaut : " << resultat2 << endl;

    cout << "Le nombre original vaut : " << nombre4 << endl;
    cout << "Le resultat vaut : " << resultat3 << endl; // resultat 6 car reference/pointeur

    double a2(1.2), b2(4.5);

    cout << "a vaut " << a2 << " et b vaut " << b2 << endl;

    echange(a2,b2);   //On utilise la fonction

    cout << "a vaut " << a2 << " et b vaut " << b2 << endl;

    cout << nombreDeSecondes(1, 10, 25) << endl;

    cout << "valeurs par defaut " << nombreDeSecondes2(1,10,25) << endl; // AVEC LES VALEURS PAR DEFAUT
    cout << "valeurs par defaut " << nombreDeSecondes2(1) << endl;

    cout << nombreDeSecondes4() << endl; // tous par defaut, sans parametres

    return 0;
}

// Définition de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}

// Définition de la fonction, SANS les valeurs par défaut
int nombreDeSecondes2(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}

int nombreDeSecondes4(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}
