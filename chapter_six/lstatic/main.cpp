#include <iostream>

void incrementAndPrint()
{
    static int s_value{1};
    int value{ 1 }; // automatic duration by default
    ++value;
    ++s_value;
    std::cout << value << '\n';
    std::cout << s_value << " static, BOOM !" << '\n';
} // value is destroyed here

int generateID()
{
    static int s_id{ 1 };
    return s_id++;
}

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    std::cout << generateID() << '\n';
    std::cout << generateID() << '\n';
    std::cout << generateID() << '\n';
    std::cout << generateID() << '\n';
    return 0;
}