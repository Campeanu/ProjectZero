/*
    NOTE(campeanu): Function declarations are often called 
    function prototypes” or “signa-tures” to emphasize that 
    they represent how the function can be accessed, but not 
    the code behind it.
*/


#include <iostream>

void myFunction(int i, char c)
{
    std::cout << "the value of i is " << i << std::endl;
    std::cout << "the value of c is " << c << std::endl;
}

// Every function has a local predefined variable __func__ that looks as follows:
// static const char __func__[] = "function-name";
int addNumbers(int number1, int number2)
{
    std::cout << "Entering function: " << __func__ << std::endl;
    return number1 + number2;
}

// Alternative Function Syntax

auto func(int i) -> int
{
    return i + 2;
}

auto main() -> int
{
    int someInt = 1001;
    char someChar = 'A';

    myFunction(8, 'a');
    myFunction(someInt, 'b');
    myFunction(5, someChar);

    std::cout << std::endl;

    int sum = addNumbers(10, 2);

    std::cout << sum << std::endl;

    std::cout << func(3) << std::endl;

    return 0;
}