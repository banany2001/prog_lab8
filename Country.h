//
// Created by banan on 28-Nov-22.
//

#ifndef PROG_LAB8_COUNTRY_H
#define PROG_LAB8_COUNTRY_H

#include <string>
#include <map>

struct Country {
    std::string name;
    std::string code;
    std::map<int, int64_t> yearPopulation;

    Country(const std::string &name, const std::string &code, const std::map<int, int64_t> &yearPopulation);

    std::string toString();

};


#endif //PROG_LAB8_COUNTRY_H
