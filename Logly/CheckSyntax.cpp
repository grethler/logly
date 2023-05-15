#include "CheckSyntax.h"
#include <iostream>
#include <string>
#include <unordered_map>

void CheckSyntax::testPrint(const std::unordered_map<std::string, std::string> &line) {
    std::cout << "{";
    for (auto element :line)
    {
        std::cout << element.first << "[";
        std::cout << element.second << "]";
    }
    std::cout << "}" << std::endl;
}

int CheckSyntax::checkLine(std::string &line, int index) {
    bool error = false;
    // check syntax of ';'
    long long semicoloncount = std::count(line.begin(), line.end(), ';');
    if (semicoloncount != 1 && line.back() != ';'){
        std::cout << "ERROR in line " << index << ": Check semicolons." << std::endl;
        error = true;
    }
    line = line.substr(0, line.size()-1);
    // check syntax of parentheses
    long long openbracketcount = std::count(line.begin(), line.end(), ')');
    long long closebracketcount = std::count(line.begin(), line.end(), ')');
    if (openbracketcount != closebracketcount) {
        std::cout << "ERROR in line " << index << ": Check parentheses." << std::endl;
        error = true;
    }

    if (error){
        return 1;
    }
    return 0;
}