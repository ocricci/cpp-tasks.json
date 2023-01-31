#include "add.h"
#include <iostream>

extern const int g_global_variable_from_add{0};

namespace add
{
    int add (int x, int y)
    {

        std::cout << '\n' << "inside add => add::g_x_add " << add::g_x_add << '\n';
        std::cout << "inside add => add::g_y_add " << add::g_y_add << '\n';
        std::cout << "inside add => add::g_z_add " << add::g_z_add << '\n';
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