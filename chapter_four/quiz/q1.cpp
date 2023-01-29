#include <iostream>

double askForNumber() {
    std::cout << "Enter a number: ";
    double x{};
    std::cin >> x;
    return x;
}

char askForOperation() {
    std::cout << "Enter an operation: ";
    char operation{};
    std::cin >> operation;
    return operation;
}

void executeOperation(double x, double y, char operation) {

    if (operation == '+') {
        std::cout << x + y << std::endl;
    }

    if (operation == '-') {
        std::cout << x - y << std::endl;
    }

    if (operation == '/' && y != 0.0) {
        std::cout << x / y << std::endl;
    }

    if (operation == '*') {
        std::cout << x * y << std::endl;
    }
}

int main() {
    double x{askForNumber()};
    double y{askForNumber()};
    char operation{askForOperation()};

    executeOperation(
        x,
        y,        
        operation
    );

    return 0;
}