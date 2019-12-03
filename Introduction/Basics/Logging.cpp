// Logging
#include <iostream>

// This is the main function
int main(int argc, char* argv[])
{
    /**
     * Every function has a local predefined variable __func__ that looks as follows:
     * static const char __func__[] = "function-name";
     */

    std::cout << __func__ << std::endl;

    std::cout << __FUNCTION__ << std::endl;

    // __PRETTY_FUNCTION__ not supported on Visual Studio
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    std::cout << __LINE__ << std::endl;

    return 0;
}