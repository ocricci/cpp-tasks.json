#include <iostream>

int main() {
    std::cout << "Enter a number: \n";
    int x{};
    std::cin >> x;
    int doublex{x * 2};
    std::cout << "You entered: " << x << " ( x2 ): " << doublex << '\n';
    return 0;
}