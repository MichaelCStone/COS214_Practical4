#ifndef COMPOSITEFARMUNIT_H
#define COMPOSITEFARMUNIT_H

#include <iostream>
#include <string>
#include <list>

#include "FarmUnit.h"

using namespace std;

class CompositeFarmUnit : public FarmUnit
{
    public:
        CompositeFarmUnit(); //done
        void removeFarmUnit(FarmUnit* unit); //done
        FarmUnit * getFarmUnit(int index); //done
        void addFarmUnit(FarmUnit* unit); //done
        void buyTruck();
        void sellTruck();
        void callTruck();

    private:
        list<FarmUnit*> farmUnits;
};

#endif