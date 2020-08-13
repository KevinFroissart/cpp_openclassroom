#include "ZFraction.h"
#include <cstdlib>
using namespace std;

// Constructeur ------------------------------------------------

ZFraction::ZFraction(int numerateur, int denominateur)
    :m_numerateur(numerateur),
    m_denominateur(denominateur)
{
    //On simplifie la fraction. L'utilisateur a peut-être donné des mauvaises valeurs
    simplifie();

    //On met le signe au numérateur au cas où l'utilisateur a entré une mauvaise valeur
    signe();
}

// Fonctions membres -------------------------------------------

void ZFraction::affiche(std::ostream& flux) const
{
    if(m_denominateur == 1)
    {
        flux << m_numerateur;
    }
    else
    {
        flux << m_numerateur << '/' << m_denominateur;
    }
}

bool ZFraction::estEgal(ZFraction const& autre) const
{
    return m_numerateur == autre.m_numerateur && m_denominateur == autre.m_denominateur;
}

bool ZFraction::estPlusPetitQue(ZFraction const& autre) const
{
    return (m_numerateur * autre.m_denominateur < autre.m_numerateur * m_denominateur);
}

double ZFraction::nombreReel() const
{
    double nombre(m_numerateur);
    nombre /= m_denominateur;
    return nombre;
}

void ZFraction::simplifie()
{
    int const diviseur(pgcd(abs(m_numerateur), m_denominateur));
    m_numerateur /= diviseur;
    m_denominateur /= diviseur;
}

void ZFraction::signe()
{
    //Si le signe est au dénominateur seulement
    if(m_numerateur >= 0 && m_denominateur <0)
    {
        m_numerateur = -m_numerateur;
        m_denominateur = -m_denominateur;
    }

    //Si le signe est au numérateur et au dénominateur
    else if(m_numerateur < 0 && m_denominateur <0)
    {
        m_numerateur = -m_numerateur;
        m_denominateur = -m_denominateur;
    }

    //Dans tous les autres cas, il n'y a rien à faire
}

// Opérateurs ---------------------------------------------------

ZFraction& ZFraction::operator+=(ZFraction const& autre)
{
    //On effectue les calculs comme à l'école
    m_numerateur = autre.m_denominateur * m_numerateur + m_denominateur * autre.m_numerateur;
    m_denominateur *= autre.m_denominateur;

    //Et on simplifie la fraction
    simplifie();
    return *this;
}

ZFraction& ZFraction::operator-=(ZFraction const& autre)
{
    m_numerateur = autre.m_denominateur * m_numerateur - m_denominateur * autre.m_numerateur;
    m_denominateur *= autre.m_denominateur;

    simplifie();
    return *this;
}

ZFraction& ZFraction::operator*=(ZFraction const& autre)
{
    m_numerateur *= autre.m_numerateur;
    m_denominateur *= autre.m_denominateur;

    simplifie();
    return *this;
}

ZFraction& ZFraction::operator/=(ZFraction const& autre)
{
    m_numerateur *= autre.m_denominateur;
    m_denominateur *= autre.m_numerateur;

    simplifie();
    signe();        //Ici, il faut aussi gérer le signe
    return *this;
}

// Envoi dans un flux -------------------------------------------------

std::ostream& operator<<(std::ostream& flux, ZFraction const& frac)
{
    frac.affiche(flux);
    return flux;
}

// Opérateurs mathématiques -------------------------------------------

ZFraction operator-(ZFraction const& autre)
{
    ZFraction copie(autre);
    copie *= -1;
    return autre;
}

ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat(a);
    return resultat+=b;    //On utilise les opérateurs raccourcis
}

ZFraction operator-(ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat(a);
    return resultat-=b;    //Idem
}

ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat(a);
    return resultat*=b;    //Idem
}

ZFraction operator/(ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat(a);
    return resultat/=b;    //Idem
}

// Opérateurs logiques ----------------------------------------

bool operator==(ZFraction const& a, ZFraction const& b)
{
    return a.estEgal(b);
}

bool operator!=(ZFraction const& a, ZFraction const& b)
{
    return !(a==b);   //On utilise un opérateur déjà défini !
}

bool operator<(ZFraction const& a, ZFraction const& b)
{
    return a.estPlusPetitQue(b);
}

bool operator>(ZFraction const& a, ZFraction const& b)
{
    return b<a;      //On utilise ce qu'on a déjà codé !
}

bool operator<=(ZFraction const& a, ZFraction const& b)
{
    return !(a>b);      //Encore une fois
}

bool operator>=(ZFraction const& a, ZFraction const& b)
{
    return !(a<b);      //Et encore !
}


// Fonctions annexes -------------------------------------------

int pgcd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

