#include "add.h"
#include<iostream>

namespace koma {
    int add(int x, int y) {
        return x + y;
    }
}

int main()
{
    std::cout << "Enter two numbers: ";
    int x, y;
    std::cin >> x >> y;
    std::cout << x << " + " << y << " = " << add::add(x, y) << '\n';
    std::cout << x << " + " << y << " = " << add::addx::addx(x, y) << '\n';
    return 0;
}