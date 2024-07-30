#include "calculator.h"
#include <cmath>
#include <stdexcept>
#include <sstream>
#include <cctype>

double Calculator::evaluate(const std::string &expression) {
    return parseExpression(expression);
}

double Calculator::parseExpression(const std::string &expression) {
    size_t index = 0;
    return parseTerm(expression, index);
}

double Calculator::parseTerm(const std::string &expression, size_t &index) {
    double result = parseFactor(expression, index);

    while (index < expression.size()) {
        char op = expression[index];

        if (op == '+' || op == '-') {
            ++index;
            double nextFactor = parseFactor(expression, index);
            if (op == '+') {
                result += nextFactor;
            } else {
                result -= nextFactor;
            }
        } else {
            break;
        }
    }

    return result;
}

double Calculator::parseFactor(const std::string &expression, size_t &index) {
    double result = parseNumber(expression, index);

    while (index < expression.size()) {
        char op = expression[index];

        if (op == '*' || op == '/') {
            ++index;
            double nextNumber = parseNumber(expression, index);
            if (op == '*') {
                result *= nextNumber;
            } else {
                result /= nextNumber;
            }
        } else if (op == '^') {
            ++index;
            double exponent = parseNumber(expression, index);
            result = std::pow(result, exponent);
        } else if (op == '!') {
            ++index;
            result = factorial(result);
        } else {
            break;
        }
    }

    return result;
}

double Calculator::parseNumber(const std::string &expression, size_t &index) {
    std::string number;
    while (index < expression.size() && (std::isdigit(expression[index]) || expression[index] == '.')) {
        number += expression[index++];
    }

    if (number.empty()) {
        throw std::runtime_error("Invalid number format");
    }

    return std::stod(number);
}

double Calculator::factorial(double n) {
    if (n < 0) {
        throw std::runtime_error("Factorial is not defined for negative numbers");
    }

    if (n == 0) {
        return 1;
    }

    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}
