#include <iostream>

int g_mode; // declare global variable (will be zero-initialized by default)

int init()
{
    return 5;
}

int g_something{ init() }; // non-constexpr initialization

int initx();  // forward declaration
int inity();  // forward declaration
int g_x{ initx() }; // g_x is initialized first
int g_y{ inity() };

int initx()
{
    return g_y; // g_y isn't initialized when this is called
}

int inity()
{
    return 5;
}

void doSomething()
{
    g_mode = 2; // set the global g_mode variable to 2
}

namespace constants
{
    constexpr double gravity { 9.8 }; // has internal linkage, is accessible only by this file
}

double getGravity() // this function can be exported to other files to access the global outside of this file
{
    // We could add logic here if needed later
    // or change the implementation transparently to the callers
    return constants::gravity;
}

double instantVelocity(int time, double gravity)
{
    return gravity * time;
}

int main()
{
    g_mode = 1; // note: this sets the global g_mode variable to 1.  It does not declare a local g_mode variable!

    doSomething();

    // Programmer still expects g_mode to be 1
    // But doSomething changed it to 2!

    if (g_mode == 1)
    {
        std::cout << "No threat detected.\n";
    }
    else
    {
        std::cout << "Launching nuclear missiles...\n";
    }

    std::cout << g_x << ' ' << g_y << '\n';
    std::cout << getGravity() << '\n';
    std::cout << instantVelocity(5, constants::gravity);
    return 0;
}