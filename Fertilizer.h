#ifndef FERTILIZER_H
#define FERTILIZER_H

#include "FarmDecorator.h"

class Fertilizer : public FarmDecorator
{
    public:
        Fertilizer(FarmUnit* unit) : FarmDecorator(unit) {}  // Constructor that takes a FarmUnit*

        void increaseProduction() override;
        void harvestCrops(int currentAmountOfCrops) override;
};

#endif