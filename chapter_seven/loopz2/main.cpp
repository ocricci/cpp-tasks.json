#include <iostream>

int main()
{
    int selection{0};
    do {
        std::cout << "Make a selection: \n 1) addition \n 2) subtraction \n";
        std::cin >> selection;
    } while (selection != 1 && selection != 2);

    std::cout << "you selected " << (selection == 1 ? "addition" : "subtraction");
    std::cout << std::endl;
    return 0;
}