#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN

//#include <iostream> pas besoin de les inclure car déjà présent dans personnage.h
//#include <string>
#include "Personnage.h"

class Magicien : public Personnage
{
    public:
        Magicien();
        Magicien(std::string nom);
        ~Magicien();
        void bouleDeFeu() const;
        void bouleDeGlace() const;

    private:
        int m_mana;
};

#endif
