#include <iostream>
#include <cstdlib>

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

void printDouble(int x) {
    std::cout << x << " doubled is: " << x * 2 << '\n';
}

int main() {
    printDouble(getValueFromUser());
    return EXIT_SUCCESS;
}