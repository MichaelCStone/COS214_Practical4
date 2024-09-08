#include "CropField.h"
#include "SoilState.h"
#include "DrySoilState.h"
#include "FruitfulSoilState.h"
#include "FloodedSoilState.h"

CropField::CropField(std::string cropType, int storageCapacity, int currAmount, SoilState* soilState)
{
    this->cropType = cropType;
    this->storageCapacity = storageCapacity;
    this->currentAmountOfCrops = currAmount;
    this->soilState = soilState;
}

int CropField::getTotalCapacity()
{
    return storageCapacity;
}

std::string CropField::getCropType()
{
    return cropType;
}

std::string CropField::getSoilStateName()
{
    //return soilState; //->getName()
    return soilState->getName();
}

void CropField::harvestCrops(int currCrops)
{
    this->currentAmountOfCrops = soilState->harvestCrops(currCrops);
}

void CropField::setState(SoilState* newState)
{
    delete soilState;

    soilState = newState;
}

void CropField::rain()
{
    //soilState->rain(this);

    switch(soilState->getName()[0]) 
    {
        case 'D': //DrySoil
            setState(new FruitfulSoilState());
            break;
        case 'F': //Fruitful or Flooded goes to Flooded state
            setState(new FloodedSoilState());
            break;
    }
}

SoilState* CropField::getSoilState()
{
    return this->soilState;
}