//
// Created by casey on 2/3/2019.
//
#include "ReallyBigClub.h"

double ReallyBigClub::hit(double armor) {


    if(armor > 70)
    {
        return hitpoints + 100;
    }
    else if(armor < 30)
    {
        return hitpoints - 50;
    }
    else
        return hitpoints;

}