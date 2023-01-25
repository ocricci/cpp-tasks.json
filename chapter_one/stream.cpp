#include <iostream>

int main() {
    std::cout << "Enter a number: \n";
    int x{};
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';
    std::cout << "Now, enter two numbers separated by a space: \n";
    int y{}, z{};
    std::cin >> y >> z;
    std::cout << "You entered: " << y << " and " << z << '\n';
    // Initialization = The object is given a known value at the point of definition.
    // Assignment = The object is given a known value beyond the point of definition.
    // Uninitialized = The object has not been given a known value yet.
    int k;
    std::cout << k << '\n';
}