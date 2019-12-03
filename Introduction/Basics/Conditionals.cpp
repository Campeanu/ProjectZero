#include <iostream>

int main()
{

    // cascading if statement

    int i = 6;

    if (i > 4) 
    {
        // Do something.
    } 
    else if (i > 2) 
    {
        // Do something else.
    } 
    else 
    {
        // Do something else.
    }

    int menuItem;
    const int OpenMenuItem = 0;
    const int SaveMenuItem = 1;

    switch (menuItem) 
    {
        case OpenMenuItem:
            // Code to open a file
            break;
        case SaveMenuItem:
            // Code to save a file
            break;
        default:
            // Code to give an error message
            break;
    }

    // ternary operator - operator ternar
    std::cout << ((i > 2) ? "yes" : "no");

    return 0;
}