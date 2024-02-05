#include <iostream>
#include "VariableArgument.h"

int main(int argc, char **argv) {
    std::cout << "Hello, World!" << std::endl;
    printNumbers(5, 1, 2, 3, 4, 5);
    std::string result = format("Hello, %s! Today is %d/%d/%d.", "World", 21, 10, 2024);
    printf("%s\n", result.c_str());
    return 0;
}
