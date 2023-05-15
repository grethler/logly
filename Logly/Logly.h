#pragma once

#include <string>
#include <vector>

class Logly {
public:
    std::string line;
    std::string filename;
    void parseFile();
    static bool endsWith(std::string const& str, std::string const& suffix);
};