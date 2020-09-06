#ifndef STATIQUE_H
#define STATIQUE_H

#include<iostream>
#include<string>

class statique
{
    public:
    statique();
    ~statique();
    static void maMethode();

    private:
    static int monAttribut;
};

#endif // STATIQUE_H
