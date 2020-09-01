#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include<iostream>
#include<string>

class Personnage
{
    public:
    Personnage(std::string nom);
    //Plein de méthodes…
    ~Personnage();
    static int nombreInstances();   //Renvoie le nombre d'objets créés

    private:
    std::string m_nom;
    static int compteur;
};
#endif // PERSONNAGE_H
