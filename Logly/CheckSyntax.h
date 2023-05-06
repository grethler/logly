//
// Created by floriangrethler on 05.05.2023.
//
#pragma once

#include <string>
#include <vector>

class CheckSyntax {
public:
	static void testPrint(std::vector<std::string> line);
	static int checkSyntax(std::vector<std::string> line, int index);
};