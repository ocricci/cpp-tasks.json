#include <iostream>
#include "add.h"

bool passOrFail() {
    static int cows{0};
    return (++cows) <= 3;
}

int main() {
    std::cout << add::max_class_size << " max class size " << '\n'; 

	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #5: " << (passOrFail() ? "Pass\n" : "Fail\n");

	return 0;

}