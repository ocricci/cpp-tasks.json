#include <iostream>

int main() {
    int x{0};
    while (x <= 10) {
        std::cout << x << ' ';
        ++x;
    }

    while (true)
    {
        std::cout << "loop again (y/n) ? \n";
        char c{};
        std::cin >> c;
        if (c == 'n') {
            break;
        }
    }

    int count{1};
    while (count <= 50) {
        if (count < 10) {
            std::cout << '0';
        }

        std::cout << count << ' ';
        if (count % 10 == 0) {
            std::cout << "\n";
        }

        ++count;
    }

    int xa{97};
    while (xa <= (97 + 25)) {
        char xc{static_cast<char>(xa)};
        std::cout << " " << xc << " ";
        ++xa;
    }

    char myChar{ 'a' };
    while (myChar <= 'z')
    {
        std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
        ++myChar;
    }


    char xk{'a'};
    ++xk;
    std::cout << xk << "\n";
    
    return 0;
}