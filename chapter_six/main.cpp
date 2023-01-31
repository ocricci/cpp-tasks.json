#include "add.h"
#include<iostream>

namespace koma {
    int add(int x, int y) {
        return x + y;
    }
}

void quiz() {
    // scope
    std::cout << "Enter a number: ";
    int smaller{};
    std::cin >> smaller;
    std::cout << "Enter another number: ";
    int larger{};
    std::cin >> larger;
    {
        if (smaller > larger) {
            int temp{ smaller };
            smaller = larger;
            larger = temp;
        }
    }

    std::cout << "You entedered " << smaller << " witch is smaller than " << larger << '\n';
}

int main()
{
    std::cout << "Enter two numbers: ";
    int x, y;
    std::cin >> x >> y;
    std::cout << x << " + " << y << " = " << add::add(x, y) << '\n';
    std::cout << x << " + " << y << " = " << add::addx::addx(x, y) << '\n';
    quiz();
    return 0;
}