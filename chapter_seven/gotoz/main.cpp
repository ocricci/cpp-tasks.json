#include <iostream>

void printCats(bool printCat) {
    if (false == printCat) {
        goto end;
    }

    std::cout << "Top cat" << "\n";

end:
    std::cout << "End of printing cats" << std::endl;
}

int main() {
enterANumber:
    std::cout << "Enter a number greater than 50: " << '\n';
    int number{0};
    std::cin >> number;
    if (number <= 50) {
        std::cout << "Ops.." << '\n';
        goto enterANumber;
    }
    std::cout << "Continues.. " << '\n';
    printCats(true);
    printCats(false);
    return 0;
}