#include <iostream>
#include "Calculator.h"

int main() {
    Calculator c;

    std::cout << "5 + 3 = " << c.add(5, 3) << std::endl;
    std::cout << "10 - 4 = " << c.subtract(10, 4) << std::endl;
    std::cout << "6 * 7 = " << c.multiply(6, 7) << std::endl;
    std::cout << "20 / 5 = " << c.divide(20, 5) << std::endl;

    return 0;
}