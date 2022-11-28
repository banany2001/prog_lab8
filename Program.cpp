//
// Created by banan on 28-Nov-22.
//

#include "Program.h"
#include <fstream>

int Program::main() {

    readCountryPopulationFromFile("world_population_1960-2018.csv", ';');
    worldPopulation.calcWorldPopulation();
    writeWorldPopulationToFile("world_population_1960-2018-processed.csv", ';');

}

void Program::readCountryPopulationFromFile(const std::string &file, char delimiter) {
    std::ifstream in;
    in.open(file);
    int read = 0;
    std::string name;
    while (getline(in, name, delimiter)){

        std::string code;
        getline(in, code, delimiter);
        std::map<int, int64_t> yearPopulationOfCountry;
        for (int year = 1960; year < 2018; year++){

            std::string s;
            getline(in, s, delimiter);

            int64_t population = 0;
            if (!s.empty()) {
                population = std::stoll(s);
            }

            yearPopulationOfCountry[year] = population;

        }

        std::string s;
        getline(in, s);

        int64_t population = 0;
        if (!s.empty()) {
            population = std::stoll(s);
        }

        yearPopulationOfCountry[2018] = population;

        if (read){
            worldPopulation.countries.emplace_back(Country(name, code, yearPopulationOfCountry));
        }
        read++;

    }
    in.close();
}

void Program::writeWorldPopulationToFile(const std::string &file, char delimiter) {
    std::ofstream out;
    out.open(file);

    for (int year = 1960; year <= 2018; year++){
        out << year << delimiter;
    }
    out << "\n";

    for (int year = 1960; year <= 2018; year++) {
        out << worldPopulation.totalYearPopulation[year] << delimiter;
    }
    out << "\n";

    out.close();
}