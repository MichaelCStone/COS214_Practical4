#include <iostream>
#include <string>
#include "CropField.h"
#include "SoilState.h"
#include "DrySoilState.h"
#include "FruitfulSoilState.h"
#include "FloodedSoilState.h"
#include "Fertilizer.h"
#include "ExtraBarn.h"

int main() {
    // Create a base CropField with initial conditions
    FarmUnit* wheatField = new CropField("Wheat", 100, 50, new DrySoilState());
    FarmUnit* cornField = new CropField("Corn", 150, 75, new FruitfulSoilState());

    // Apply the Fertilizer decorator to increase production in the wheat field
    FarmUnit* fertilizedWheatField = new Fertilizer(wheatField);
    fertilizedWheatField->harvestCrops(40);  // should increase production due to fertilizer

    // Apply the ExtraBarn decorator to increase storage capacity in the corn field
    FarmUnit* barnEnhancedCornField = new ExtraBarn(cornField);
    
    // Harvest crops from both fields after decoration
    fertilizedWheatField->harvestCrops(40);  // Fertilizer applied to increase production
    barnEnhancedCornField->harvestCrops(90); // Barn applied to increase capacity

    // Print results for the wheat field (fertilized)
    std::cout << "Fertilized wheat field total capacity: " << fertilizedWheatField->getTotalCapacity() << std::endl;
    std::cout << "Fertilized wheat field soil state: " << fertilizedWheatField->getSoilStateName() << std::endl;

    // Print results for the corn field (with extra barn)
    std::cout << "\nCorn field total capacity with extra barn: " << barnEnhancedCornField->getTotalCapacity() << std::endl;
    std::cout << "Corn field leftover capacity (extra barn): " << barnEnhancedCornField->getLeftOverCapacity() << std::endl;
    std::cout << "Corn field soil state: " << barnEnhancedCornField->getSoilStateName() << std::endl;

    // Apply rain to change soil states and print new states
    std::cout << "\nApplying rain..." << std::endl;
    wheatField->rain();
    cornField->rain();
    
    std::cout << "Wheat field soil state after rain: " << wheatField->getSoilStateName() << std::endl;
    std::cout << "Corn field soil state after rain: " << cornField->getSoilStateName() << std::endl;

    // Clean up dynamically allocated memory
    delete fertilizedWheatField;
    delete barnEnhancedCornField;

    return 0;
}
