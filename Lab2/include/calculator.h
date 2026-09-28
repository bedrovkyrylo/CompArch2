#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdexcept>

// Simple calculator that performs the four basic arithmetic operations.
class Calculator {
public:
    Calculator() = default;

    double add(double a, double b) const;
    double subtract(double a, double b) const;
    double multiply(double a, double b) const;

    // Throws std::invalid_argument if b == 0.
    double divide(double a, double b) const;
};

#endif // CALCULATOR_H
