#include <iostream>

int main() {
    int x{0};
    int y{0};

    std::cout << "Enter a number: " << '\n';
    std::cin >> x;
    std::cout << "Enter another number: " << '\n';
    std::cin >> y;

    if (x > y) {
        std::cout << x << " is greater than " << y << '\n';
    } else {
        std::cout << y << " is greater than " << x << '\n';
    }
}