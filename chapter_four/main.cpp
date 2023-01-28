#include <iostream>
#include <iomanip>
#include <cstdint>

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
    std::cout << std::int16_t{1} << " is the int16_t" << '\n';
    std::cout << sizeof(std::int_fast8_t) << " fast !" << '\n';
    std::cout << sizeof(std::int_fast32_t) * 8 << " fast !" << '\n';
    std::cout << "The size of std::size_t is: " << sizeof(std::size_t) << '\n';
}

void floatz() {
    float koma{10.0};
    double komad{10.0};
    long double komald{10.0};
    std::cout << koma << " is the float" << '\n';
    std::cout << komad << " is the double" << '\n';
    std::cout << komald << " is the long double" << '\n';

    std::cout << std::setprecision(17);
    double c{1.0};
    std::cout << c << " is the double" << '\n';
    double d{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    std::cout << d << " is the double" << '\n';

}

void boolz() {
    bool k;
    std::cout << std::boolalpha;
    std::cout << (k = 4) << " is the bool" << '\n';
    std::cout << (k = 0) << " is the bool" << '\n';
    //std::cout << "Enter a boolean value: \n";
    //std::cin >> std::boolalpha;
    //std::cin >> k;
    //std::cout << k << " is the value you entered, the bool" << '\n';
}

void ifz() {
    std::cout << "Enter a number my friend'o: \n";
    int x;
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';
    if (x > 10) {
        std::cout << "You entered a number bigger than 10" << '\n';
    } else if (x < 10) {
        std::cout << "You entered a number smaller than 10" << '\n';
    } else {
        std::cout << "You entered a number equal to 10" << '\n';
    }
}

int main() {
    voidz();
    sizeofz();
    intz();
    floatz();
    boolz();
    ifz();
    return 0;
}