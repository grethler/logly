#include "Logly.h"
#include "CheckSyntax.h"

#include <fstream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> Logly::split(const std::string& s, char delim) {
    std::vector<std::string> result;
    std::stringstream ss(s);
    std::string item;
    while (getline(ss, item, delim)) {
        result.push_back(item);
    }
    return result;
}
void Logly::parseFile() {
    std::string line;
    std::ifstream loglyfile(filename);
    int index = 1;
    while (getline(loglyfile, line)) {
        std::vector<std::string> vline = split(line, ' ');
        CheckSyntax::checkSyntax(vline, index);
        index++;
    }
    loglyfile.close();
}

bool Logly::endsWith(std::string const& str, std::string const& suffix) {
    if (str.length() < suffix.length()) {
        return false;
    }
    return str.compare(str.length() - suffix.length(), suffix.length(), suffix) == 0;
}
