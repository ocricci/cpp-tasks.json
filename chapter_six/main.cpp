#include "add.h"
#include<iostream>

int g_global_variable{-1};
int g_shadow{0};

namespace koma {
    int add(int x, int y) {
        return x + y + g_global_variable;
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
    std::cout << x << " + " << y << " = " << koma::add(x, y) << " koma add applies the global -1 " << '\n';
    std::cout << x << " + " << y << " = " << add::addx::addx(x, y) << '\n';
    quiz();

    int shadow{1};
    {
        std::cout << "shadow: " << shadow << '\n';
        std::cout << "g_shadow: " << g_shadow << '\n';
        int shadow{2};
        int g_shadow{2};
        std::cout << "shadow [inside block]: " << shadow << '\n';
        std::cout << "g_shadow [inside block]: " << g_shadow << '\n';
    }
    std::cout << "shadow [outside block]: " << shadow << '\n';
    std::cout << "g_shadow [outside block]: " << g_shadow << '\n';

    std::cout << "add::g_x_add " << add::g_x_add << '\n';
    std::cout << "add::g_y_add " << add::g_y_add << '\n';
    std::cout << "add::g_z_add " << add::g_z_add << '\n';
    return 0;
}