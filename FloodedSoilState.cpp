#include "FloodedSoilState.h"
#include "CropField.h"

int FloodedSoilState::harvestCrops(int currAmount)
{
    return currAmount * 0; //flooded, kills all current crops
}

void FloodedSoilState::rain(CropField* c)
{
    c->setState(new FloodedSoilState() );
}

std::string FloodedSoilState::getName()
{
    return "Flooded";
}