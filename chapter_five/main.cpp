#include<iostream>
#include<cmath>
#include <cassert>

std::int64_t powint(std::int64_t base, int exp)
{
	assert(exp >= 0 && "powint: exp parameter has negative value");

	std::int64_t result{ 1 };
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}

	return result;
}

int main() {
    std::cout << powint(7, 12) << '\n';
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    std::cout << "The number power of 2 is: " << pow(number, 2) << '\n';
    std::cout << "Sign inversion, here we go: " << -number << '\n';
    number = -number;
    std::cout << "Sign inversion again, here we go: " << -number << '\n';
    number = -number;
    if (number % 2 == 0) {
        std::cout << "The number " << number << " is even" << '\n';
    } else {
        std::cout << "The number " << number << " is odd" << '\n';
    }

    int x{ 5 };
    int y{ 5 };
    std::cout << x << ' ' << y << '\n';
    std::cout << ++x << ' ' << --y << '\n'; // prefix
    std::cout << x << ' ' << y << '\n';
    std::cout << x++ << ' ' << y-- << '\n'; // postfix
    std::cout << x << ' ' << y << '\n';
    
    int b{0};
    std::cout << b << ' ' << x << '\n';
    b = x++;
    std::cout << b << ' ' << x << '\n'; 

    int c{1};
    int d{2};
    std::cout << (c++, d++) << '\n';
    int z{0};
    //z = (c,d);
    std::cout << z << '\n';
    //z = c,d;
    std::cout << z << '\n';
    z == 0 ? c = 1 : d = 2;
    // 6 + 5 * 4 % 3
    std::cout << 6 + ((5 * 4) % 3) << std::endl;
    return 0;
}