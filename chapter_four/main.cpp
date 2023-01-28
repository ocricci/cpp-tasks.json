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
}

int main() {
    voidz();
    sizeofz();
}

