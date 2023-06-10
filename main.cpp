#include "Logly/Logly.h"
#include <iostream>

std::string version = "dev";

int main(int argc, char* argv[]) {
    Logly logly;
    std::string arg1;
    if (argc < 2) {
        std::cout << "PARSINGERROR: Missing argument Loglyfile." << std::endl;
        return 1;
    }
    else if (argc > 2) {
        std::cout << "PARSINGERROR: Too many arguments." << std::endl;
        return 1;
    }
    else {
        arg1 = argv[1];
    }
    if (arg1 == "-h") {
        std::cout << "-h\n--version\nLoglyfile" << std::endl;
        return 0;
    }
    else if (arg1 == "--version") {
        std::cout << "Logly version " << version << std::endl;
        return 0;
    }
    else if (Logly::endsWith(arg1, ".lgy")) {
        logly.filename = arg1;
        logly.parseFile();
        return 0;
    }
    else {
        if (arg1.rfind('-', 0) == 0) {
            std::cout << "PARSINGERROR: Wrong arguments detected." << std::endl;
            return 1;
        }
        std::cout << "FILEERROR: Can't open file." << std::endl;
        return 1;
    }
}