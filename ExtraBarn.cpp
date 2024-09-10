#include "ExtraBarn.h"

int ExtraBarn::getLeftOverCapacity()
{
    return fUnit->getTotalCapacity() + 100; //100 is new barn size.
}