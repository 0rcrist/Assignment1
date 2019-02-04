//
// Created by casey on 2/3/2019.
//

#ifndef ASSIGNMENT1_CRAZYRANDOMSWORD_H
#define ASSIGNMENT1_CRAZYRANDOMSWORD_H
#include<cstdlib>
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", rand() % 100 + 7) {
        //Calls Weapon(name, hitpoints) constructor with values CrazyRandomSword and a random int between 7 and 100
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};
#endif //ASSIGNMENT1_CRAZYRANDOMSWORD_H
