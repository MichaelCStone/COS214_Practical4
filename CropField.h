#ifndef CROPFIELD_H
#define CROPFIELD_H

#include <iostream>
#include <string>

#include "FarmUnit.h"
#include "SoilState.h"

class CropField : public FarmUnit
{
    private:
        std::string cropType;
        int storageCapacity;
        int currentAmountOfCrops;
        //std::string soilState; //probable get this from SoilState class??

        SoilState* soilState;

    public:
        CropField(std::string cropType, int storageCapacity, int currAmount, SoilState* soilState);
        int getTotalCapacity();
        std::string getCropType();
        std::string getSoilStateName();

        //void setCurrAmountCrops(int currAmount); //added

        void harvestCrops(int currentAmountOfCrops);

        void rain();

        void setState(SoilState* state);

        SoilState* getSoilState();
};  

#endif