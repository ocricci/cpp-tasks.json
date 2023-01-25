#include <iostream>

#define MANTRA "The way of the future"
#define BOOM false

int main() {
#ifdef MANTRA
    std::cout << MANTRA << std::endl;
#endif

#ifdef BOOM
    std::cout << BOOM << std::endl;
#endif

#ifndef AWAY
    std::cout << "not defined, stop clearing the buffer for every line !" << std::endl;
#endif

    std::cout << "Hello, World!" << std::endl;

    return 0;
}