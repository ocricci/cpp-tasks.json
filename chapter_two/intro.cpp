#include <iostream>

void doPrint() {
    std::cout << "Inside doPrint! \n";
}

void doA() {
    std::cout << "Inside doA! \n";
}

void doB() {
    doA();
    std::cout << "Inside doB! \n";
}

int main() {
    std::cout << "Starting main \n";
    doPrint();
    doB();
    std::cout << "Ending main \n";
    return 0;
}
