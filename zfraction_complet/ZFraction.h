#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>

class ZFraction
{
public:

    /**
     *  Construit une fraction avec un num�rateur et un d�nominateur fourni en argument
     */
    ZFraction(int numerateur = 0, int denominateur = 1);

    /**
     * Affiche la fraction dans le flux pass� en argument
     */
    void affiche(std::ostream& flux) const;

    /**
     * Renvoie true si la fraction est egale a celle recue en argument
     */
    bool estEgal(ZFraction const& autre) const;

    /**
     * Renvoie true si la fraction est plus petite que celle recue en argument
     */
    bool estPlusPetitQue(ZFraction const& autre) const;

    /**
     * Renvoie le nombre r�el repr�sent� par la fraction
     */
    double nombreReel() const;

    /**
     *  Op�rateurs raccourcis
     */
    ZFraction& operator+=(ZFraction const& autre);
    ZFraction& operator-=(ZFraction const& autre);
    ZFraction& operator*=(ZFraction const& autre);
    ZFraction& operator/=(ZFraction const& autre);

private:

    /**
     * Simplifie la fraction
     */
    void simplifie();
    
    /**
     * Met le signe moins au num�rateur si n�cessaire
     */
    void signe();

    int m_numerateur;      // Le numerateur de la fraction
    int m_denominateur;    // Le denominateur de la fraction
};

/**
 * Envoie la fraction dans un flux
 */
std::ostream& operator<<(std::ostream& flux, ZFraction const& frac);

/**
 * Oppos� d'une fraction
 */
ZFraction operator-(ZFraction const& a);

/**
 * Addition de deux fractions
 */
ZFraction operator+(ZFraction const& a, ZFraction const& b);

/**
 * Soustraction de deux fractions
 */
ZFraction operator-(ZFraction const& a, ZFraction const& b);

/**
 * Produit de deux fractions
 */
ZFraction operator*(ZFraction const& a, ZFraction const& b);

/**
 * Rapport de deux fractions
 */
ZFraction operator/(ZFraction const& a, ZFraction const& b);

/**
 * Test d'�galit�
 */
bool operator==(ZFraction const& a, ZFraction const& b);

/**
 * Test de diff�rence
 */
bool operator!=(ZFraction const& a, ZFraction const& b);

/**
 * Tests de comparaison
 */
bool operator<(ZFraction const& a, ZFraction const& b);
bool operator>(ZFraction const& a, ZFraction const& b);
bool operator<=(ZFraction const& a, ZFraction const& b);
bool operator>=(ZFraction const& a, ZFraction const& b);

/**
 * Calcule le PGCD de deux nombres
 */
int pgcd(int a, int b);

#endif // ZFRACTION_H
