//
// Created by casey on 2/3/2019.
//

#include"Weapon.h"
#include<string>

#ifndef ASSIGNMENT1_SIMPLEHAMMER_H
#define ASSIGNMENT1_SIMPLEHAMMER_H

/* This class is for a simple hammer. it does 25.0 damage
 *
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("SimpleHammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values SimpleHammer and 25.0
    }

    virtual ~CommonSpear() {};

    virtual double hit(double armor);

};

#endif //ASSIGNMENT1_SIMPLEHAMMER_H
