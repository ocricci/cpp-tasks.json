#include <iostream>

// do not use inline
inline int min(int x, int y) {
    return x < y ? x : y;
}

int main() {
    std::cout << min(3,2) << std::endl;
    std::cout << min(6,12) << std::endl;
    std::cout << min(3,99) << std::endl;
    return 0;
}