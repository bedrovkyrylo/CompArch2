#include <iostream>

#include "calculator.h"

int main() {
    Calculator calc;
    double a, b;
    char op;

    std::cout << "Enter expression (e.g. 3 + 4): ";
    if (!(std::cin >> a >> op >> b)) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    try {
        double result = 0.0;
        switch (op) {
            case '+': result = calc.add(a, b); break;
            case '-': result = calc.subtract(a, b); break;
            case '*': result = calc.multiply(a, b); break;
            case '/': result = calc.divide(a, b); break;
            default:
                std::cerr << "Unknown operator: " << op << "\n";
                return 1;
        }
        std::cout << "Result: " << result << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}
