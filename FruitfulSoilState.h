#ifndef FRUITFULSOILSTATE_H
#define FRUITFULSOILSTATE_H

#include <iostream>
#include <string>

#include "SoilState.h"

class FruitfulSoilState : public SoilState
{
    public:
        int harvestCrops(int currAmount);
        void rain(CropField* c);
        std::string getName();
};

#endif