#include <iostream>
#include <fstream>
using namespace std;


void f()
{
   ofstream flux("/home/kasket/Documents/cpp/lectureFichier/test.txt");  //Le fichier est ouvert

   //Utilisation du fichier

}  //Lorsque l'on sort du bloc, le fichier est automatiquement refermé

void f2()
{
   ofstream flux("/home/kasket/Documents/cpp/lectureFichier/test.txt");  //Le fichier est ouvert

   //Utilisation du fichier

   flux.close();  //On referme le fichier
                  //On ne peut plus écrire dans le fichier à partir d'ici
}

void f3()
{
   ofstream flux;  //Un flux sans fichier associé

   flux.open("/home/kasket/Documents/cpp/lectureFichier/test.txt");  //On ouvre le fichier C:/Nanoc/data.txt

   //Utilisation du fichier

   flux.close();  //On referme le fichier
                  //On ne peut plus écrire dans le fichier à partir d'ici
}

int main()
{
    //ofstream monFlux("/home/kasket/Documents/cpp/lectureFichier/test.txt");
    //Déclaration d'un flux permettant d'écrire dans le fichier
    // /home/kasket/Documents/cpp/lectureFichier/test.txt

    // ofstream monFlux(nomFichier.c_str(), ios::app);
    // pour ajouter les lignes à la fin du fichier sans le supprimer (app = append)

    string const nomFichier("/home/kasket/Documents/cpp/lectureFichier/test.txt");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)
    {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(23);
        monFlux << "J'ai " << age << " ans." << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

    ifstream fichier("/home/kasket/Documents/cpp/lectureFichier/test.txt");  //Ouverture d'un fichier en lecture

    if(fichier)
    {
        //Tout est prêt pour la lecture.
        string ligne; //Une variable pour stocker les lignes lues

        while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {
            cout << ligne << endl;
            //Et on l'affiche dans la console
            //Ou alors on fait quelque chose avec cette ligne
            //À vous de voir
            int position = fichier.tellg(); //On récupére la position
            //tellg pour ifstream et tellp pour ofstream
            //seekg seekp pour déplacer le curseur dans le fichier

            cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;
        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }

    ifstream fichier2("/home/kasket/Documents/cpp/lectureFichier/test.txt");  //On ouvre le fichier
    fichier2.seekg(0, ios::end);  //On se déplace à la fin du fichier

    int taille;
    taille = fichier2.tellg();
    //On récupère la position qui correspond donc a la taille du fichier !

    cout << "Taille du fichier : " << taille << " octets." << endl;


    return 0;
}
