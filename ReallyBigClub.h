//
// Created by casey on 2/3/2019.
//

#ifndef ASSIGNMENT1_REALLYBIGCLUB_H
#define ASSIGNMENT1_REALLYBIGCLUB_H
class ReallyBigClub : public Weapon {
public:

    ReallyBigClub() : Weapon("Really Big Club", 100.0) {
        //Calls Weapon(name, hitpoints) constructor with values Really Big Club and 100.0
    }

    virtual ~ReallyBigClub() {};

    virtual double hit(double armor);

};
#endif //ASSIGNMENT1_REALLYBIGCLUB_H
