#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include <list>

#include "FarmUnit.h"

using namespace std;

class Truck
{
    public:
        virtual void update();
        void startEngine();
};

#endif