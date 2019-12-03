#include <iostream>
#include <array>

int main()
{
    // The for Loop
    for(int i = 0; i < 5; ++i)
        std::cout << "Hello wordl!" << std::endl;

    int i = 0;

    std::cout << std::endl;

    // The while Loop
    while(i < 5)
    {
        std::cout << "Hello world!" << std::endl;
        i++;
    }

    i = 1001;

    std::cout << std::endl;

    // The do/while Loop
    do
    {  
        std::cout << "Hello world!" << std::endl;
    } while (i < 5);

    std::cout << std::endl;

    // The Range-Based for Loop
    std::array<int, 4> arr = {1, 2, 3, 4};
    for (int i : arr) {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
