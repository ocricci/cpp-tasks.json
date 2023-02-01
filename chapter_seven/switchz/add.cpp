#include <iostream>

void printDigitName(int digit) {
    switch (digit) {
        case 1:
            std::cout << "One" << '\n';
            std::cout << "fallthrough.." << '\n';
            [[fallthrough]];

        case 2:
            std::cout << "Two" << '\n';
        break;

        case 3:
            std::cout << "Three" << '\n';
        break;

        default:
            std::cout << "Unknown" << '\n';
        break;
    }

    std::cout << "function continues because swtich used break instead of return" << std::endl;
}

int askNumber() {
    std::cout << "Enter a number between 1 and 3: ";
    int digit{0};
    std::cin >> digit;
    return digit;
}

void calcx(int digit, int digito, char operation) {
    switch (operation) {
        case '+':
            std::cout << digit << " + " << digito << " = " << (digit + digito) << '\n';
        break;

        case '-':
            std::cout << digit << " - " << digito << " = " << (digit - digito) << '\n';
        break;

        case '*':
            std::cout << digit << " * " << digito << " = " << (digit * digito) << '\n';
        break;

        case '/':
            if (0 == digito) {
                std::cout << "division by zero is not allowed" << '\n';
                return;
            }

            std::cout << digit << " / " << digito << " = " << (digit / digito) << '\n';
        break;

        default:
            std::cout << "Unknown operation: " << operation << '\n';
        break;
    }
}

int main() {
    int digit{askNumber()};
    if (digit < 1 || digit > 3) {
        std::cout << digit << " is not between 1 and 3... " << "Never ever do it again !" << '\n';
        return 0;
    }

    printDigitName(digit);
    int digito{askNumber()};

    std::cout << "Enter an operation ( +, -, / or % )" << '\n';
    char operation{};
    std::cin >> operation;
 
    calcx(digit, digito, operation);
    return 0;
}