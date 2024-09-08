#ifndef SOILSTATE_H
#define SOILSTATE_H

#include <iostream>
#include <string>

//#include "CropField.h"

class CropField;

class SoilState
{
    // protected:
    //     std::string soilType;
    public: 
        virtual int harvestCrops(int currAmount) = 0;
        //virtual void rain() = 0;
        virtual std::string getName() = 0;

        virtual ~SoilState() = default;

        virtual void rain(CropField* c) = 0; //handleChange
};

#endif