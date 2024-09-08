#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <iostream>
#include <string>

#include "SoilState.h"

class FarmUnit
{
    public:
        virtual void increaseProduction();
        virtual void harvestCrops(int currAmount);
        virtual int getLeftOverCapacity();
        virtual int getTotalCapacity();
        virtual void harvestCrops(int currentAmountOfCrops);
        virtual void setState(SoilState* state);
        virtual std::string getSoilStateName();


};

#endif