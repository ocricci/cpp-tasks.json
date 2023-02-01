#include <iostream>

void printDigitName(int digit) {
    switch (digit) {
        case 1:
            std::cout << "One" << '\n';
        break;

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

int main() {
    std::cout << "Enter a number between 1 and 3: ";
    int digit{0};
    std::cin >> digit;
    if (digit < 1 || digit > 3) {
        std::cout << digit << " is not between 1 and 3... " << "Never ever do it again !" << '\n';
        return 0;
    }

    printDigitName(digit);
    return 0;
}