#include <iostream>
#include <cmath>
#include <stdexcept>
#include "calculator.h"

int main() {
    Calculator calculator;
    std::string expression;
    
    std::cout << "Scientific Calculator\n";
    std::cout << "Enter your expression (type 'exit' to quit):\n";

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, expression);

        if (expression == "exit") {
            break;
        }

        try {
            double result = calculator.evaluate(expression);
            std::cout << "Result: " << result << "\n";
        } catch (const std::exception &e) {
            std::cerr << "Error: " << e.what() << "\n";
        }
    }

    return 0;
}
