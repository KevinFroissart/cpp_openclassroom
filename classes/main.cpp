#include <iostream>
#include <string>
//#include "Personnage.h" //Ne pas oublier
#include "Guerrier.h" //Ne pas oublier
// Pas de besoin de personnage.h car il est déjà appelé dans magicien.h


using namespace std;

int main()
{
   Personnage marcel("Marcel");
   marcel.sePresenter();

   Guerrier lancelot("Lancelot du Lac");
   lancelot.sePresenter();

   return 0;
}
