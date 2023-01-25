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

int doubleParameter(int x) {
    return x * 2;
}

int main() {
    int x{getValueFromUser()};
    printDouble(x);
    std::cout << x << " x2 is: " << doubleParameter(x) << std::endl;
    return EXIT_SUCCESS;
}