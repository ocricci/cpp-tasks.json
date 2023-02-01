#include <iostream>

int main() {
enterANumber:
    std::cout << "Enter a number greater than 50: " << '\n';
    int number{0};
    std::cin >> number;
    if (number <= 50) {
        std::cout << "Ops.." << '\n';
        goto enterANumber;
    }
    std::cout << "Continues.. " << '\n';
    return 0;
}