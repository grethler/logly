#pragma once

#include <string>
#include <unordered_map>

class CheckSyntax {
public:
    static void testPrint(const std::unordered_map<std::string, std::string> &line);
    static int checkLine(std::string &line, int index);
};