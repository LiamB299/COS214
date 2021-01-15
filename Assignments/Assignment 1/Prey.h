#if !defined(Prey_H)
#define Prey_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "PreyMemento.h"

using namespace std;
class Prey
{
private:
    int HP;
    string type;
    int damage;

    state* genState();

public:
    Prey();
    Prey(int HP, string type, int damage);
    ~Prey();
    Prey *clone();
    int getHP();
    void setHP(int HP);
    string getType();
    void setType(string type);
    int getDamage();
    void setDamage(int damage);
    bool run();
    int fight();
    int takeDamage(int damage);

    PreyMemento* setMemento();
    void ReInState(PreyMemento*);
    string toString();

};

#endif // Prey_H
