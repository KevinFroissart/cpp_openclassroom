#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string melangerLettres(string mot)
{
    string motShuffle;
    int nbAleatoire(0);

    while(mot.size() != 0)
    {
        nbAleatoire = rand() % mot.size();
        motShuffle += mot[nbAleatoire];
        mot.erase(nbAleatoire, 1);
    }
    return motShuffle;
}

int main()
{
    srand(time(0));

    string mot, motTrouve, motShuffle;

    cout << "Saisissez un mot : " << endl;
    cin >> mot;

    motShuffle = melangerLettres(mot);

    do
    {
        cout << endl << "Quel est ce mot ? " << motShuffle << endl;
        cin >> motTrouve;

        if(motTrouve == mot) cout << "Bravo !" << endl;
        else cout << "Ce n'est pas le mot." << endl;

    }while(motTrouve != mot);

    return 0;
}
