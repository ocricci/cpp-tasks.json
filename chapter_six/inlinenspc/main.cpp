#include <iostream>

inline namespace koma {
    void print() {
        std::cout << "Hello, World! From koma::print" << std::endl;
    }
}

namespace komax {
    void print() {
        std::cout << "Hello, World! From komax::print" << std::endl;
    }
}

int main() {
    koma::print();
    komax::print();
    print();
    return 0;
}