#include <assert.h>
#include "Prey.h"
#include "Lion.h"
#include "Cheetah.h"
#include "Wolf.h"
#include "WildDog.h"
#include "LionFactory.h"
#include "CheetahFactory.h"
#include "WolfFactory.h"
#include "WildDogFactory.h"
#include "PreyMemento.h"
#include "PreyStore.h"
#include "PredatorMemento.h"
#include "PredatorStore.h"

int main()
{
    /************************************************************/
    /************************** TASK 1 **************************/
    /************************************************************/

    /*Predator **p = new Predator *[4];
    p[0] = new Lion("Lion Hunting", "Lion Special");
    p[1] = new Cheetah("Cheetah Hunting", "Cheetah Special");
    p[2] = new Wolf("Wolf Hunting", "Wolf Special");
    p[3] = new Wild_Dog("WildDog Hunting", "WildDog Special");
    Prey *prey = new Prey(15, "Bok", 10);

    for (int i = 0; i < 4; i++)
    {
        p[i]->catchPrey(prey);
        p[i]->getAttacked(prey);
        p[i]->attack(prey);
        p[i]->die();
        p[i]->speciality();
        cout << endl;
    }

    // Memory free
    for (int i = 0; i < 4; i++)
        delete p[i];
    delete[] p;
    delete prey;
    p = nullptr;
    prey = nullptr;
    cout << endl;

    /************************************************************/
    /************************** TASK 2 **************************/
    /************************************************************/

    /*cout << "Task 2\n";
    p = new Predator *[4];
    prey = new Prey(15, "Bok", 10);
    PredatorFactory **pf = new PredatorFactory *[4];
    pf[0] = new LionFactory();
    pf[1] = new CheetahFactory();
    pf[2] = new WolfFactory();
    pf[3] = new WildDogFactory();
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        p[i] = pf[i]->createPredator("Hunting Method", "Speciality");
        p[i]->catchPrey(prey);
        p[i]->getAttacked(prey);
        p[i]->attack(prey);
        p[i]->die();
        p[i]->speciality();
        cout << endl;
    }

    // Memory free
    for (int i = 0; i < 4; i++)
    {
        delete p[i];
        delete pf[i];
    }
    delete[] p;
    delete prey;
    delete[] pf;
    p = nullptr;
    prey = nullptr;
    pf = nullptr;
    cout << endl;

    /************************************************************/
    /************************** TASK 3 **************************/
    /************************************************************/

    /**
     * NB: Assertions are used here to test code, if an assertion fails, please check your clone method.
     */

    /*cout << "Task 3\n";

    prey = new Prey(15, "Bok", 10);
    Prey *clonedPrey = prey->clone();

    assert(prey != clonedPrey);

    cout << "Prey 1:\nHP:\t\t" << prey->getHP() << "\nDamage:\t\t" << prey->getDamage() << "\nType:\t\t" << prey->getType() << endl;
    cout << "Prey 2:\nHP:\t\t" << clonedPrey->getHP() << "\nDamage:\t\t" << clonedPrey->getDamage() << "\nType:\t\t" << clonedPrey->getType() << endl
         << endl;

    assert(prey->getHP() == clonedPrey->getHP());
    assert(prey->getDamage() == clonedPrey->getDamage());
    assert(prey->getType() == clonedPrey->getType());

    prey->setHP(5);
    prey->setDamage(5);
    prey->setType("Buffalo");

    cout << "Prey 1:\nHP:\t\t" << prey->getHP() << "\nDamage:\t\t" << prey->getDamage() << "\nType:\t\t" << prey->getType() << endl;
    cout << "Prey 2:\nHP:\t\t" << clonedPrey->getHP() << "\nDamage:\t\t" << clonedPrey->getDamage() << "\nType:\t\t" << clonedPrey->getType() << endl
         << endl;

    assert(prey->getHP() != clonedPrey->getHP());
    assert(prey->getDamage() != clonedPrey->getDamage());
    assert(prey->getType() != clonedPrey->getType());

    delete clonedPrey;
    delete prey;
    clonedPrey = nullptr;
    prey = nullptr;
    cout << endl;

    /************************************************************/
    /************************** TASK 4 **************************/
    /************************************************************/

    /*cout<<"Task 4\n";
    prey = new Prey(15, "Bok", 10);
    p = new Predator *[1];
    pf = new PredatorFactory *[1];
    pf[0] = new LionFactory();

    p[0] = pf[0]->createPredator("Lions Hunting Method", "Lions Speciality");
    p[0]->hunt(prey);
    cout << (p[0]->getHP() > 0 ? "Predator Wins" : "Prey Wins") << endl;

    delete p[0];
    delete pf[0];
    delete[] p;
    delete prey;
    delete[] pf;
    p = nullptr;
    prey = nullptr;
    pf = nullptr;
    cout << endl;


    /************************************************************/
    /************************** TASK 4.2/3/4 ************************/
    /************************************************************/

    cout << "Task 4.234\n";
    Prey ** py = new Prey *[2];
    py[0] = new Prey(18, "Buffalo", 4);
    py[1] = new Prey(8, "Bok", 2);

    PreyStore ** prey_st = new PreyStore *[2];
    for (int i=0; i<2; i++) {
    	prey_st[i] = new PreyStore();
    	prey_st[i]->setStore(py[i]->setMemento());
    }

    Predator **pr = new Predator *[4];
    PredatorFactory **pf = new PredatorFactory *[4];
        pf[0] = new LionFactory();
        pf[1] = new CheetahFactory();
        pf[2] = new WolfFactory();
        pf[3] = new WildDogFactory();

    pr[0] = pf[0]->createPredator("Lion Hunting", "Lion Special");
    pr[1] = pf[1]->createPredator("Cheetah Hunting", "Cheetah Special");
    pr[2] = pf[2]->createPredator("Wolf Hunting", "Wolf Special");
    pr[3] = pf[3]->createPredator("WildDog Hunting", "WildDog Special");

    PredatorStore ** pred_st = new PredatorStore *[4];
    for (int i=0; i<4; i++) {
    	pred_st[i] = new PredatorStore();
    	pred_st[i]->store(pr[i]->createMemento());
    }

    string post_summ[8], pre_summ[8];

    int k =0;
    for(int i=0; i<4; i++){
    	for(int j=0; j<2; j++){\
    		pre_summ[k] = "Pre Summary "+to_string(k)+"\n"+pr[i]->toString()+py[j]->toString()+"\n";
    		cout << "\n"+to_string(k)+"\n";
    		pr[i]->hunt(py[j]);
    		post_summ[k] = "Post Summary "+to_string(k)+"\n"+pr[i]->toString()+py[j]->toString()+"\n";
    		k++;
    		pr[i]->ReInState(pred_st[i]->getMom());
    		py[j]->ReInState(prey_st[j]->getStore());
    	}
    }
    cout<< "\n";
    for(int i=0; i<8; i++) {
    	cout << pre_summ[i] << post_summ[i];
    }

    for(int i=0; i<4; i++) {
    	delete pr[i];
    	delete pf[i];
    	delete pred_st[i];
    }

    for(int i=0; i<2; i++) {
    	delete py[i];
    	delete prey_st[i];
    }

    return 0;
}
