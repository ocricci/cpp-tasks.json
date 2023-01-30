#include "add.h"
#include <iostream>

namespace add
{
    int add (int x, int y)
    {
        std::cout << "calling add::add" << '\n';
        return x + y;
    }

    namespace addx
    {
        int addx(int x, int y)
        {
            std::cout << "calling add::addx::addx" << '\n';
            return x + y + x;
        }   
    }
}