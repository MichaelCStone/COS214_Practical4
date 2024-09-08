#include <iostream>
#include <string>

#include "CropField.h"
#include "SoilState.h"
#include "DrySoilState.h"
#include "FruitfulSoilState.h"
#include "FloodedSoilState.h"

int main() {
    // Create instances of CropField
    CropField dryCrop("Wheat", 100, 50, new DrySoilState());
    CropField fruitfulCrop("Corn", 150, 75, new FruitfulSoilState());

    // Simulate growing crops
    dryCrop.harvestCrops(40);
    fruitfulCrop.harvestCrops(90);

    // Apply rain
    dryCrop.rain();
    fruitfulCrop.rain();

   // Print results
    std::cout << "Dry field capacity: " << dryCrop.getTotalCapacity() << std::endl;
    std::cout << "Dry field crop type: " << dryCrop.getCropType() << std::endl;
    std::cout << "Dry field soil state: " << dryCrop.getSoilStateName() << std::endl;

    std::cout << "\nFruitful field capacity: " << fruitfulCrop.getTotalCapacity() << std::endl;
    std::cout << "Fruitful field crop type: " << fruitfulCrop.getCropType() << std::endl;
    std::cout << "Fruitful field soil state: " << fruitfulCrop.getSoilStateName() << std::endl;


    // Clean up dynamically allocated memory
    delete dryCrop.getSoilState();
    delete fruitfulCrop.getSoilState();

    return 0;
}