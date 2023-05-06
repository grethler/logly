#pragma once

#include <string>
#include <vector>

class CheckSyntax {
public:
    static void testPrint(std::vector<std::string> line);
    static int checkSyntax(std::vector<std::string> line, int index);
};