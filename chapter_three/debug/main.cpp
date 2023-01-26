#include "add.h"
#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);
    printValue(6);
    printValue(7);
    printValue(add(1,2));
    return 0;
}