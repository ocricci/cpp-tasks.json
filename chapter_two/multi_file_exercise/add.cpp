#include <iostream>

// called add, so i don't need to change tasks.cpp
int getInteger()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	return x;
}