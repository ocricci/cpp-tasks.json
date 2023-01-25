#include <iostream>

int main() {
    std::cout << "Enter a number: \n";
    int x{};
    std::cin >> x;
    std::cout << "You entered: " << x << " ( x2 ): " << x * 2 << '\n';
    return 0;
}