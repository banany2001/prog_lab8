//
// Created by banan on 28-Nov-22.
//

#ifndef PROG_LAB8_WORLDPOPULATION_H
#define PROG_LAB8_WORLDPOPULATION_H

#include "Country.h"
#include <vector>
#include <map>

struct WorldPopulation {
    std::vector<Country> countries;
    std::map<int, int64_t> totalYearPopulation;

    void calcWorldPopulation();
};


#endif //PROG_LAB8_WORLDPOPULATION_H
