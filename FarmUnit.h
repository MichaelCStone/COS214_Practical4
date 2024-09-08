#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <iostream>
#include <string>

#include "SoilState.h"

class FarmUnit
{
    public:
        virtual void increaseProduction() = 0;
        virtual void harvestCrops(int currAmount) = 0;
        virtual int getLeftOverCapacity() = 0;
        virtual int getTotalCapacity() = 0;
        virtual void harvestCrops(int currentAmountOfCrops) = 0;
        virtual void setState(SoilState* state) = 0;
        virtual std::string getSoilStateName() = 0;


};

#endif