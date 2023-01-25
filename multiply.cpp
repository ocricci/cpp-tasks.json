#include <iostream>

int main() {
    std::cout << "Enter a number: \n";
    int x{};
    std::cin >> x;
    std::cout << "You entered: " << x << " ( x2 ): " << x * 2 << '\n';

    // quest
    std::cout << "Double is: " << x * 2 << "\nTriple is: " << x * 3 << std::endl;

    return 0;
}