#include "Prey.h"

Prey::Prey()
{
    cout << "Prey Created." << endl;
    damage =0;
    HP =0;
}

Prey::Prey(int HP, string type, int damage)
{
    srand(0);
    cout << "Prey Created." << endl;
    this->setHP(HP);
    this->setType(type);
    this->setDamage(damage);
}

Prey::~Prey()
{
    cout << "Prey Destroyed." << endl;
}

Prey *Prey::clone()
{
    // For you to implement in task 3. Please note, the below line is merely a placeholder.
	return new Prey(HP, type, damage);
}

int Prey::getHP()
{
    return this->HP;
}

void Prey::setHP(int HP)
{
    this->HP = HP;
}

string Prey::getType()
{
    return this->type;
}

void Prey::setType(string type)
{
    this->type = type;
}

int Prey::getDamage()
{
    return this->damage;
}

void Prey::setDamage(int damage)
{
    this->damage = damage;
}

bool Prey::run()
{
    return ((rand() % 100) + 1) > 50;
}

int Prey::fight()
{
    if ((rand() % 100 + 1) > 80)
        return this->getDamage();
    return 0;
}

int Prey::takeDamage(int damage)
{
    this->setHP(this->getHP() - damage);
    return this->getHP();
}

state* Prey::genState() {
	return new state(HP, damage, type);
}

PreyMemento* Prey::setMemento() {
	PreyMemento *m = new PreyMemento();
	m->setState(genState());
	return m;
}

void Prey::ReInState(PreyMemento* m) {
	HP = m->getState()->getHP();
	damage = m->getState()->getDam();
	type = m->getState()->getType();
}

string Prey::toString() {
	return "Prey="+type+" HP="+to_string(HP)+" damage="+to_string(damage)+"\n";
}
