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

bool closeEnough(double a, double b, double epsilon = 0.00000001)
{
    return std::fabs(a - b) < epsilon;
}

bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

bool approximatelyEqualRelx(double a, double b, double relEpsilon)
{
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

bool approximatelyEqualAbsRelx(double a, double b, double absEpsilon, double relEpsilon)
{
    // Check if the numbers are really close -- needed when comparing numbers near zero.
    double diff{ std::abs(a - b) };
    if (diff <= absEpsilon)
        return true;

    // Otherwise fall back to Knuth's algorithm
    return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
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
    std::cout << 6 + ((5 * 4) % 3) << '\n';
    
    double dd1{ 100.0 - 99.99};
    double dd2{ 10.0 - 9.99 };

    if (dd1 == dd2) {
        std::cout << "dd1 and dd2 are equal" << '\n';
    } else if (dd1 < dd2) {
        std::cout << "dd1 < dd2" << '\n';
    } else {
        std::cout << "dd1 > dd2" << '\n';
    }

    std::cout << std::boolalpha;
    std::cout << "are dd1 and dd2 close enough? " << closeEnough(dd1, dd2) << '\n';

    std::cout << "are dd1 and dd2 approximately equal? " << approximatelyEqualRel(dd1, dd2, 0.0001) << '\n';

    // ax is really close to 1.0, but has rounding errors
    double ax{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    std::cout << approximatelyEqualRelx(ax, 1.0, 1e-8) << '\n';     // compare "almost 1.0" to 1.0
    std::cout << approximatelyEqualRelx(ax-1.0, 0.0, 1e-8) << '\n'; // compare "almost 0.0" to 0.0

    std::cout << approximatelyEqualAbsRelx(ax, 1.0, 1e-12, 1e-8) << '\n'; // compare "almost 1.0" to 1.0
    std::cout << approximatelyEqualAbsRelx(ax-1.0, 0.0, 1e-12, 1e-8) << '\n'; // compare "almost 0.0" to 0.0


    bool b1{ true };
    bool b2{ true };

    std::cout << (b1 && b2) << ": b1 && b2" << '\n';
    std::cout << !(b1 && b2) << ": !(b1 && b2)" << '\n';
    return 0;
}