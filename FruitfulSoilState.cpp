#include "FruitfulSoilState.h"
#include "FloodedSoilState.h"
#include "CropField.h"

int FruitfulSoilState::harvestCrops(int currAmount)
{
    return currAmount * 3;
}

void FruitfulSoilState::rain(CropField* c)
{
    c->setState(new FloodedSoilState() );
}

std::string FruitfulSoilState::getName()
{
    return "Fruitful";
}