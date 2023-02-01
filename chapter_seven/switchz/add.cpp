#include <iostream>

void printDigitName(int digit) {
    switch (digit) {
        case 1:
            std::cout << "One" << std::endl;
        return;

        case 2:
            std::cout << "Two" << std::endl;
        return;

        case 3:
            std::cout << "Three" << std::endl;
        return;

        default:
            std::cout << "Unknown" << std::endl;
        return;
    }
}

int main() {
    std::cout << "Enter a number between 1 and 3: ";
    int digit{0};
    std::cin >> digit;
    if (digit < 1 || digit > 3) {
        std::cout << digit << " is not between 1 and 3... " << "Never ever do it again !" << std::endl;
        return 0;
    }

    printDigitName(digit);
    return 0;
}