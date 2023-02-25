#include <cstdint>
#include <limits>
#include <iostream>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double askForADouble(double targetDouble, bool mustBeDiff)
{
    static int count{0};
    ++count;
    while (true) {
        std::cout << "Enter a double ( " << count << " )" << " \n";
        double k{0.0};
        std::cin >> k;
        if (!std::cin) {
            std::cout << "Invalid input ! \n\n";
            std::cin.clear();
            ignoreLine();
            continue;
        }

        ignoreLine();
        if (targetDouble == k && mustBeDiff) {
            std::cout << "Doubles must be different \n";
            continue;
        }

        return k;
    }
}

std::int16_t askForInt16()
{
    std::int16_t x{0};
    while (true) {
        std::cout << "Enter a number between -32768 and 32767: \n";
        std::cin >> x;
        if (!std::cin) {
            std::cin.clear();
            std::cout << "Invalid input \n";
            ignoreLine();
            continue;
        }

        ignoreLine();
        return x;
    }
}

int main()
{
    double k{askForADouble(0.0, false)};
    std::cout << "You've entered: " << k << "\n";
    double q{askForADouble(k, true)};
    std::cout << "You've entered: " << q << "\n";
    std::int16_t x{askForInt16()};
    std::cout << "You've entered: " << x << "\n";    
}