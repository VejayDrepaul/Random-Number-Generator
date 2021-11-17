#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[]) {
    int max = std::stoi(argv[2]) + 1;

    if(argc > 3) {
        std::cout << "There are too many arguments" << std::endl;
    } else if (std::string(argv[1]) == "rand") {
        srand(time(0));
        std::cout << rand() % max << std::endl;
    } else {
        std::cout << "There are not enough arguments";
    }

    return 0;
}