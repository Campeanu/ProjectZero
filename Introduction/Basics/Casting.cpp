// Casting.cpp
#include <iostream>

int main()
{
    int myFloat = 12.79f;

    // Variables can be converted to other types by casting them.
    // The third is the most verbose, but the cleanest and recommended method.

    // Method 1:
    std::cout << (int)myFloat << std::endl;

    // Method 2:
    std::cout << int(myFloat) << std::endl;

    // Method 3:
    std::cout << static_cast<int>(myFloat) << std::endl;

    return 0;
}