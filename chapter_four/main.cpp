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
}

void intz() {
    std::cout << (8 / 5) << " is the int division of 8 / 5" << "\n";
    unsigned int koma{10};
    std::cout << koma << " is the unsigned" << '\n';

    unsigned short x{65535};
    std::cout << "x was: " << x << '\n';
    // out of range stuff
    /*
    x = 65536; 
    std::cout << "x is now: " << x << '\n';
    x = 65537;
    std::cout << "x is now: " << x << '\n';
    x = -2;
    std::cout << "x is now: " << x << '\n';
    */
    int xz{1};
    //unsigned int y{-1};
    int y{-1};
    if (y < xz) {
        std::cout << "y is smaller than x" << '\n';
    } else {
        std::cout << "y is bigger than x BUGGY" << '\n';
    }

    unsigned int minus{1};
    std::cout << minus << " is the unsigned int minus" << '\n';
    minus--;
    minus--;
    std::cout << minus << " is the unsigned int minus" << '\n';

}

int main() {
    voidz();
    sizeofz();
    intz();
    return 0;
}