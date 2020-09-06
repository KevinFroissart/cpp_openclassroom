#ifndef DEF_GUERRIER
#define DEF_GUERRIER

//#include <iostream> pas besoin de les inclure car d�j� pr�sent dans personnage.h
//#include <string>
#include "Personnage.h"

class Guerrier : public Personnage
{
    public:
        Guerrier();
        Guerrier(std::string nom);
        ~Guerrier();
        void frapperCommeUnSourdAvecUnMarteau() const;
        //M�thode qui ne concerne que les guerriers
        void sePresenter() const;
};

#endif
