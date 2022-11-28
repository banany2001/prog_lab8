//
// Created by banan on 28-Nov-22.
//

#ifndef PROG_LAB8_PROGRAM_H
#define PROG_LAB8_PROGRAM_H

#include "WorldPopulation.h"
#include "Country.h"
#include <iostream>

class Program {

    WorldPopulation worldPopulation;

public:
    int main();
    void readCountryPopulationFromFile(const std::string& file, char delimiter);
    void writeWorldPopulationToFile(const std::string& file, char delimiter);

};


#endif //PROG_LAB8_PROGRAM_H
