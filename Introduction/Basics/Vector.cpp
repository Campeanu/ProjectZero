#include <iostream>
#include <string>
#include <vector>
#include <iterator>


int main()
{
    std::vector<std::string> myVector = {"A first string", "A last string"};
    
    myVector.push_back("A third string.");
    myVector.push_back("The last string in the vector.");
    
    for(const auto& str : myVector)
        std::cout << str << std::endl; 
    
    for(auto iterator = std::cbegin(myVector);
        iterator != std::cend(myVector); 
        ++iterator)
    {
        std::cout << *iterator << std::endl;
    }
    
    return 0;
}