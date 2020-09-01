#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


// Rien ne compile et tout est dans le même fichier car flemme de construire tout un projet pour un exemple.

class Vehicule
{
    public:
    void affiche() const;  //Affiche une description du Vehicule

    protected:
    int m_prix;  //Chaque véhicule a un prix
};

class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
    public:
    void affiche() const;

    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    void affiche() const;

    private:
    double m_vitesse;  //La vitesse maximale de la moto
};

void Vehicule::affiche() const
{
    cout << "Ceci est un vehicule." << endl;
}

void Voiture::affiche() const
{
    cout << "Ceci est une voiture." << endl;
}

void Moto::affiche() const
{
    cout << "Ceci est une moto." << endl;
}


int main()
{
    Vehicule v;
    v.affiche();    //Affiche "Ceci est un vehicule."

    Moto m;
    m.affiche();    //Affiche "Ceci est une moto."

    return 0;
}

void presenter(Vehicule v)  //Présente le véhicule passé en argument
{
    v.affiche();
}

int main()
{
    Vehicule v;
    presenter(v);

    Moto m;
    presenter(m);
                    // les deux affiches "ceci est un vehicule"
    return 0;
}

void presenter(Vehicule const& v)  //Présente le véhicule passé en argument
{
    v.affiche();
}

int main()  //Rien n'a changé dans le main()
{
    Vehicule v;
    presenter(v);

    Moto m;
    presenter(m); //maintenant ça marche, du au fait que c'est un pointeur et qu'il y ai un virtual dans le .h

    return 0;
}

int main()
{
    Vehicule *v(0);
    v = new Voiture;
    //On crée une Voiture et on met son adresse dans un pointeur de Vehicule

    v->affiche();  //On affiche "Ceci est une voiture."

    delete v;      //Et on détruit la voiture

    //Nous avons un pointeur mais la méthode appelée n'est pas virtuelle. C'est donc le destructeur deVehiculequi est appelé et pas celui deVoiture!

    return 0;
}


// apres avoir amélioré le .h

Vehicule::Vehicule(int prix)
    :m_prix(prix)
{}

void Vehicule::affiche() const
//J'en profite pour modifier un peu les fonctions d'affichage
{
    cout << "Ceci est un vehicule coutant " << m_prix << " euros." << endl;
}

Vehicule::~Vehicule() //Même si le destructeur ne fait rien, on doit le mettre !
{}

Voiture::Voiture(int prix, int portes)
    :Vehicule(prix), m_portes(portes)
{}

void Voiture::affiche() const
{
    cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << endl;
}

Voiture::~Voiture()
{}

Moto::Moto(int prix, double vitesseMax)
    :Vehicule(prix), m_vitesse(vitesseMax)
{}

void Moto::affiche() const
{
    cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << endl;
}

Moto::~Moto()
{}



// COLLECTIONS

vector<Voiture> listeVoitures;
vector<Moto> listeMotos;

int main()
{
    vector<Vehicule*> listeVehicules; //couvre tous les styles de véhicules ?
//C'est ce qu'on appelle une collection hétérogène puisqu'elle contient, d'une certaine manière, des types différents.
    return 0;
}

int main()
{
    vector<Vehicule*> listeVehicules;

    listeVehicules.push_back(new Voiture(15000, 5));
    //J'ajoute à ma collection de véhicules une voiture
    //Valant 15000 euros et ayant 5 portes
    listeVehicules.push_back(new Voiture(12000, 3));  //…
    listeVehicules.push_back(new Moto(2000, 212.5));
    //Une moto à 2000 euros allant à 212.5 km/h

    //On utilise les voitures et les motos

    return 0;
}
