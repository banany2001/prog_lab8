//
// Created by banan on 28-Nov-22.
//

#include "Country.h"

std::string Country::toString() {
    std::string ans;
    ans += this->name + " (" + this->code + "): ";
    for (auto x: this->yearPopulation){
        ans += std::to_string(x.second) + "[" + std::to_string(x.first) + "], ";
    }
    ans.pop_back();
    ans.pop_back();
    return ans;
}

Country::Country(const std::string &name, const std::string &code, const std::map<int, int64_t> &yearPopulation) : name(
        name), code(code), yearPopulation(yearPopulation) {}
