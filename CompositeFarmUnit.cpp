#include "CompositeFarmUnit.h"

CompositeFarmUnit::CompositeFarmUnit() : FarmUnit(), farmUnits() {}

void CompositeFarmUnit::addFarmUnit(FarmUnit* unit)
{
    this->farmUnits.push_back(unit);
}

void CompositeFarmUnit::removeFarmUnit(FarmUnit* unit)
{
    this->farmUnits.remove(unit);
}

FarmUnit * CompositeFarmUnit::getFarmUnit(int index)
{
    if (index < 0 || index >= farmUnits.size()) 
    {
        return nullptr; // Index out of bounds
    }

    auto it = this->farmUnits.begin();
    std::advance(it, index); // Move the iterator to the desired position
    return *it;
}

