#include <iostream>
#include "VariableArgument.h"

int main(int argc, char **argv) {
    std::cout << "Hello, World!" << std::endl;
    printNumbers(5, 1, 2, 3, 4, 5);
    return 0;
}
