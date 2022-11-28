//
// Created by banan on 28-Nov-22.
//

#include "WorldPopulation.h"

void WorldPopulation::calcWorldPopulation() {
    for (int year = 1960; year <= 2018; year++){
        totalYearPopulation[year] = 0;
    }

    for (const auto& country : countries){
        for (auto yearData: country.yearPopulation){
            totalYearPopulation[yearData.first] += yearData.second;
        }
    }
}