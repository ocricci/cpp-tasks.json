#include <iostream>

int sumTo(int target)
{
    int sum{0};
    for (int i{0}; i <= target; i++) {
        sum += i;
    }
    return sum;
}

int main()
{
    // for (init-statement; condition; end-expression)
    // statement;
    for (int i{0}; i <= 10; i++) {
        std::cout << i << "\n"; 
    }

    {
        int count{ 1 }; // our init-statement
        while (count <= 10) // our condition
        {
            std::cout << count << ' '; // our statement
            ++count; // our end-expression
        }
    }

    std::cout << "\n\n";
    for (int k{0}; k <= 20; k += 2) {
        std::cout << k << ' ';
    }

    std::cout << " here we go, for " << std::endl;
    std::cout << " calling sumTo for 10: " << sumTo(10);
    return 0;
}
