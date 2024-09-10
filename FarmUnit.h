#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <iostream>
#include <string>

#include "SoilState.h"

class FarmUnit
{
    public:
        virtual void increaseProduction() {};
        virtual int getLeftOverCapacity() {return 0;} ;
        virtual int getTotalCapacity() {return 0;} ;
        virtual void harvestCrops(int currentAmountOfCrops) {};
        virtual void setState(SoilState* state) {};
        virtual std::string getSoilStateName() {return "";} ;
        virtual void rain() {};

        virtual ~FarmUnit() = default;


};

#endif