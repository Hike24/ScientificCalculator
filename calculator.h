#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator {
public:
    double evaluate(const std::string &expression);
private:
    double parseExpression(const std::string &expression);
    double parseTerm(const std::string &expression, size_t &index);
    double parseFactor(const std::string &expression, size_t &index);
    double parseNumber(const std::string &expression, size_t &index);
    double factorial(double n);
};

#endif
