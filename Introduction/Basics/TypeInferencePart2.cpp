#include <iostream>
#include <string>

const std::string message = "Test";

const std::string& foo()
{
    return message;
}

int main()
{
    auto f1 = foo();

    return 0;
}
