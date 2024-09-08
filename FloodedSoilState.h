#ifndef FLOODEDSOILSTATE_H
#define FLOODEDSOILSTATE_H

#include <iostream>
#include <string>

#include "SoilState.h"

class FloodedSoilState : public SoilState
{
    public:
        int harvestCrops(int currAmount);
        void rain(CropField* c);
        std::string getName();
};

#endif