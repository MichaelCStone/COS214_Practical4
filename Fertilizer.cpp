#include "Fertilizer.h"
#include "FruitfulSoilState.h"

void Fertilizer::increaseProduction()
{
    if(fUnit->getSoilStateName() == "Dry")
    {
        setState(new FruitfulSoilState());
    }
}

void Fertilizer::harvestCrops(int currentAmountOfCrops)
{
    increaseProduction(); //change state first

    fUnit->harvestCrops(currentAmountOfCrops);
}