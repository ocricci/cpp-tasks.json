#include <iostream>

void voidz() {
    std::cout << "Voidz" << std::endl;
}

void sizeofz() {
    std::cout << "Sizeof\n";
    std::cout << "short: " << sizeof(short) << "\n";
    std::cout << "int: " << sizeof(int) << "\n";
    std::cout << "float: " << sizeof(float) << "\n";
    std::cout << "bool: " << sizeof(bool) << "\n";
    std::cout << "long long: " << sizeof(long long) << "\n";
    std::cout << sizeof("This cool string'o") << "\n";
    std::cout << (8 / 5) << " is the int division of 8 / 5" << std::endl;
}

int main() {
    voidz();
    sizeofz();
    return 0;
}

