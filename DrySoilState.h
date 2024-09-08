#ifndef DRYSOILSTATE_H
#define DRYSOILSTATE_H

#include <iostream>
#include <string>

#include "SoilState.h"

class DrySoilState : public SoilState
{
    public:
        int harvestCrops(int currAmount);
        //void rain();
        std::string getName();

        void rain(CropField* c);

};

#endif