//
// Created by casey on 2/3/2019.
//

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

    //this calculates 1/3 of the armor
    int remainingArmor = armor * 0.666;
    //this gives a random number between 2 and 1/3 armor
    int pen = rand() % remainingArmor + 2;
    //damage = hitpoints minus the random armor penetration
    double damage = hitpoints - pen;
    return damage;
}