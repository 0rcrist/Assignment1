//
// Created by casey on 2/3/2019.
//
#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {

   double damage = hitPoints;
    if(armor < 30)
    {
        return damage;
    }
    else{
        if(damage - armor < 0)
            return 0;
        else
            return damage - armor;
    }

}
