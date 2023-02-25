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

    // inversion
    int qt{5};
    while (qt > 0) {
        int qi{qt};
        while (qi > 0) {
            std::cout << qi << ' ';
            --qi;
        }

        std::cout << "\n";
        --qt;
    }


    // space print
    int so{1};
    while (so <= 5) {
        int si{5};
        while (si > 0) {
            if (si <= so) {
                std::cout << si << ' ';
            } else {
                std::cout << ' ' << ' ';
            }

            --si;
        }
        std::cout << "\n";
        ++so;
    }

    return 0;
}