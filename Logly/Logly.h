#pragma once

#include <string>
#include <vector>

class Logly {
public:
    std::string line;
    std::string filename;
    void parseFile();
    static bool endsWith(const std::string &str, const std::string &suffix);
};