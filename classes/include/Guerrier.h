#ifndef DEF_GUERRIER
#define DEF_GUERRIER

//#include <iostream> pas besoin de les inclure car déjà présent dans personnage.h
//#include <string>
#include "Personnage.h"

class Guerrier : public Personnage
{
    public:
        Guerrier();
        Guerrier(std::string nom);
        ~Guerrier();
        void frapperCommeUnSourdAvecUnMarteau() const;
        //Méthode qui ne concerne que les guerriers
        void sePresenter() const;
};

#endif
