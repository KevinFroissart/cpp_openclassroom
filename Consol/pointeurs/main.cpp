#include <iostream>
using namespace std;

int main()
{
    int ageUtilisateur(16);
    cout << "L'adresse est : " << &ageUtilisateur << endl;
    //Affichage de l'adresse de la variable

    double *pointeurA(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre à virgule

    unsigned int *pointeurB(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre entier positif

    string *pointeurC(0);
    //Un pointeur qui peut contenir l'adresse d'une chaîne de caractères

   // vector<int> *pointeurD(0);
    //Un pointeur qui peut contenir l'adresse d'un tableau dynamique de nombres entiers

    int const *pointeurE(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre entier constant


    //int ageUtilisateur(16);
    //Une variable de type int
    int *ptr(0);
    //Un pointeur pouvant contenir l'adresse d'un nombre entier

    ptr = &ageUtilisateur;
    //On met l'adresse de 'ageUtilisateur' dans le pointeur 'ptr'

    cout << "L'adresse de 'ageUtilisateur' est : " << &ageUtilisateur << endl;
    cout << "La valeur de pointeur est : " << ptr << endl;
    cout << "La valeur est :  " << *ptr << endl;

    // ALLOCATION DE MEMOIRE

    int *pointeur(0);
    pointeur = new int; // new = allocation manuelle

    *pointeur = 2;  //On accède à la case mémoire pour en modifier la valeur
    delete pointeur;//On libère la case mémoire
    pointeur = 0;   //On indique que le pointeur ne pointe plus vers rien

    // EXEMPLE

    int* pointeur2(0);
    pointeur2 = new int;

    cout << "Quel est votre age ? ";
    cin >> *pointeur2;
    //On écrit dans la case mémoire pointée par le pointeur 'pointeur'

    cout << "Vous avez " << *pointeur2 << " ans." << endl;
    //On utilise à nouveau *pointeur
    delete pointeur2;   //Ne pas oublier de libérer la mémoire
    pointeur2 = 0;      //Et de faire pointer le pointeur vers rien

    // AUTRE EXEMPLE

    string reponseA, reponseB, reponseC;
    reponseA = "La peur des jeux de loterie";
    reponseB = "La peur du noir";
    reponseC = "La peur des vendredis treize";

    cout << "Qu'est-ce que la 'kenophobie' ? " << endl; //On pose la question
    cout << "A) " << reponseA << endl; //Et on affiche les trois propositions
    cout << "B) " << reponseB << endl;
    cout << "C) " << reponseC << endl;

    char reponse;
    cout << "Votre reponse (A,B ou C) : ";
    cin >> reponse; //On récupère la réponse de l'utilisateur

    string *reponseUtilisateur(0); //Un pointeur qui pointera sur la réponse choisie
    switch(reponse)
    {
    case 'A':
        reponseUtilisateur = &reponseA; //On déplace le pointeur sur la réponse choisie
        break;
    case 'B':
        reponseUtilisateur = &reponseB;
        break;
    case 'C':
        reponseUtilisateur = &reponseC;
        break;
    }

    //On peut alors utiliser le pointeur pour afficher la réponse choisie
    cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;

    return 0;
}
