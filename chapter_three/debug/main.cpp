#include "add.h"
#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
    printValue(5);
    printValue(6);
    printValue(7);
    printValue(add(1,2));
    a();
    b();
    return 0;
}
