#include <iostream>
#include <cstdlib>
#include <string>
#include "../include/math_ops.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: ./a.out <add|sub> <num1> <num2>\n";
        return 1;
    }

    MathOps math;
    double a = atof(argv[2]);
    double b = atof(argv[3]);
    std::string op = argv[1];

    if (op == "add")
        std::cout << "Result: " << math.add(a, b) << "\n";
    else if (op == "sub")
        std::cout << "Result: " << math.subtract(a, b) << "\n";
    else
        std::cout << "Unknown operation\n";

    return 0;
}
