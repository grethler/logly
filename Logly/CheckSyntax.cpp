#include "CheckSyntax.h"
#include <iostream>
#include <string>
#include <unordered_map>

void CheckSyntax::testPrint(std::unordered_map<std::string, std::string> line) {
    std::cout << "{";
    for (auto element :line)
    {
        std::cout << element.first << "[";
        std::cout << element.second << "]";
    }
    std::cout << "}" << std::endl;
}

int CheckSyntax::checkLine(std::string line, int index) {
    bool error = false;
    return 0;
}