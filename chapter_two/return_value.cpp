#include <iostream>

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int x{ getValueFromUser() };
    std::cout << "You entered: " << x << '\n';
    return 0;
}