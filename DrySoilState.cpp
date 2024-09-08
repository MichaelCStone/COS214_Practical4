#include "DrySoilState.h"
#include "FruitfulSoilState.h"
#include "CropField.h"

int DrySoilState::harvestCrops(int currAmount)
{
    return currAmount; //return what you planted, not more cuz not fruitful
}

void DrySoilState::rain(CropField* c)
{
    c->setState(new FruitfulSoilState());
}

std::string DrySoilState::getName()
{
    return "Dry";
}

