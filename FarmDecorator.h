#ifndef FARMDECORATOR_H
#define FARMDECORATOR_H

#include <iostream>
#include <string>

#include "FarmUnit.h"

class FarmDecorator : public FarmUnit
{
    protected:
        FarmUnit* fUnit;

    public: 
        FarmDecorator(FarmUnit* unit) : fUnit(unit) {}  // Constructor to store the FarmUnit*

        virtual void increaseProduction() override;
        virtual int getLeftOverCapacity() override;
        virtual void harvestCrops(int currentAmountOfCrops) override;
};

#endif