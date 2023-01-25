#include <iostream>

char randomNumber();

int main(int argc, char* argv[]) {
    std::cout << "Hello World" << std::endl;
    std::cout << randomNumber() << std::endl;
    return 0;
}

char randomNumber() {
    return '5';
}
