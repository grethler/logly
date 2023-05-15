#include "Logly.h"
#include "CheckSyntax.h"

#include <fstream>
#include <string>
#include <unordered_map>
#include <iostream>

void Logly::parseFile() {
    std::ifstream loglyfile(filename);
    int index = 1;
    while (getline(loglyfile, line)) {
        // remove empty lines and comments
        if (!line.empty() && line.find_first_not_of(" \t") != std::string::npos && line[0] != '&') {
            std::cout << line << std::endl;
            if (line.substr(0,2) == "if"){
                // if .... then .... statement
                // dict {if_this:then_this} ?
            }
            else {
                // ... is .... statement
                CheckSyntax::checkLine(line, index);
                // create dictionary from line. A is (B and C); -> {A:(B and C)}
                std::string key, value;
                size_t pos = line.find(" is ");
                if (pos != std::string::npos) {
                    key = line.substr(0, pos);
                    value = line.substr(pos + 4);
                }
                std::unordered_map<std::string, std::string> dict = {{key, value}};
                CheckSyntax::testPrint(dict);
            }
            index++;
        }
    }
    loglyfile.close();
}

bool Logly::endsWith(const std::string &str, const std::string &suffix) {
    if (str.length() < suffix.length()) {
        return false;
    }
    return str.compare(str.length() - suffix.length(), suffix.length(), suffix) == 0;
}
