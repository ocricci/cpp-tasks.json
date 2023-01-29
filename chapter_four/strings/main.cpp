#include <iostream>
#include <string>
#include <string_view>

void getUserData() {
    std::string name{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    std::cout << "Your name has " << name.length() << " characters" << '\n';
    
    using namespace std::literals;
    std::cout << "With Suffix"s << '\n';
    std::cout << "With Suffix, string view"sv << '\n';

    std::cout << "What is the name of your dog ? " << '\n';
    std::string dogName{};
    std::getline(std::cin >> std::ws, dogName);
    int dogAge{};
    std::cout << "How old is your dog ? " << '\n';
    std::cin >> dogAge;
    std::cout << "Your dog's name is " << dogName << '\n';
    std::cout << "Your dog is " << dogAge << " years old" << '\n';
    std::cout << "The sum of your dog age and the letters in his name is ";
    std::cout << dogAge + static_cast<int>(dogName.length()) << '\n';
}

int main() {
    std::string hello{};
    hello = "Hello World!";
    getUserData();
    std::cout << hello << std::endl;
    return 0;
}
