//
// Created by floriangrethler on 05.05.2023.
//

#pragma once

#include <string>
#include <vector>

class Logly {
public:
    std::string filename;
    std::vector<std::string> split(const std::string& s, char delim);
    void parseFile();
    static bool endsWith(std::string const& str, std::string const& suffix);
};