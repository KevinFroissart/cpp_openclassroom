#include "Personnage.h"

using namespace std;

int Personnage::compteur = 0; //On initialise notre compteur � 0

Personnage::Personnage(string nom)
    :m_nom(nom)
{
    ++compteur;  //Quand on cr�e un personnage, on ajoute 1 au compteur
}

Personnage::~Personnage()
{
    --compteur;  //Et on enl�ve 1 au compteur lors de la destruction
}

int Personnage::nombreInstances()
{
    return compteur;   //On renvoie simplement la valeur du compteur
}
