#include "CheckSyntax.h"
#include <iostream>
#include <string>
#include <vector>

void CheckSyntax::testPrint(std::vector<std::string> line) {
    std::cout << "{";
    for (int i = 0; i < line.size(); i++) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << line[i];
    }
    std::cout << "}" << std::endl;
}

int CheckSyntax::checkSyntax(std::vector<std::string> line, int index) {
    bool error = false;
    int lsize = line.size();
    if (lsize > 0 and line[0][0] != '&') {
        //The next line is for development purposes
        testPrint(line);
        if (line[lsize-1][line[lsize-1].size()-1] != ';') {
            std::cout << "SYNTAXERROR: Expected ';' at the end of line " << index << "." << std::endl;
        }
        else if (line[1] != "is" and line[0] != "if") {
            std::cout << "SYNTAXERROR: Expected 'is' but got '" << line[1] << "' in line " << index << "." << std::endl;
            error = true;
        }
        else if (line[0] == "if" and line[4] != "then") {
            if (line[3][0] == '(') {
                int idx = 0;
                for (const std::string& entry: line) {
                    if (entry == "then") {
                        if (line[idx-1][line[idx-1].size()-1] != ')') {
                            std::cout << "SYNTAXERROR: Expected ')' in line " << index << "." << std::endl;
                            error = true;
                        }
                        break;
                    }
                    idx++;
                }
            }
            else {
                std::cout << "SYNTAXERROR: Expected 'then' but got '" << line[2] << "' in line " << index << "." << std::endl;
                error = true;
            }
        }
    }
    if (error) {
        return 1;
    }
    return 0;
}