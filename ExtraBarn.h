#ifndef EXTRABARN_H
#define EXTRABARN_H

#include "FarmDecorator.h"

class ExtraBarn : public FarmDecorator
{
    public:
        ExtraBarn(FarmUnit* unit) : FarmDecorator(unit) {}  // Constructor that takes a FarmUnit*

        int getLeftOverCapacity() override;
};

#endif