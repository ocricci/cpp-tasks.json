#include <iostream>

int main() {
    [[maybe_unused]] int x;
    int y, z;
    int width;
    width = 5;
    width = 7;

    // Initialization methods
    int a;         // no initializer (default initialization)
    int b = 5;     // initializer after equals sign (copy initialization)
    int c( 6 );    // initializer in parenthesis (direct initialization)

    // List initialization methods (C++11)
    int d { 7 };   // initializer in braces (direct list initialization)
    int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
    int f {};      // initializer is empty braces (value initialization)

    int koma {10};
    std::cout << koma << std::endl;

    return 0;
}