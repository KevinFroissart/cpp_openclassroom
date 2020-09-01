#ifndef VEHICULES_H_INCLUDED
#define VEHICULES_H_INCLUDED

// virtual seulement dans le .h

class Vehicule
{
    public:
    Vehicule(int prix);           //Construit un véhicule d'un certain prix
    virtual void affiche() const;
    virtual ~Vehicule();          //Remarquez le 'virtual' ici

    protected:
    int m_prix;
};

class Voiture: public Vehicule
{
    public:
    Voiture(int prix, int portes);
    //Construit une voiture dont on fournit le prix et le nombre de portes
    virtual void affiche() const;
    virtual ~Voiture();

    private:
    int m_portes;
};

class Moto : public Vehicule
{
    public:
    Moto(int prix, double vitesseMax);
    //Construit une moto d'un prix donné et ayant une certaine vitesse maximale
    virtual void affiche() const;
    virtual ~Moto();

    private:
    double m_vitesse;
};
#endif // VEHICULES_H_INCLUDED
