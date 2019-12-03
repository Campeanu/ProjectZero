#include <iostream>
#include <string>

// Enumerated Types

// Behind the scenes, an enumerated type is just an integer value.
enum PieceType { PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10, PieceTypePawn };

// Strongly Typed Enumerations

enum class MyEnum
{
    EnumValue1,
    EnumValue2 = 10,
    EnumValue3
};

enum class MyEnumLong : unsigned long
{
    EnumValueLong1,
    EnumValueLong2 = 10,
    EnumValueLong3
};

// Structures

struct Employee
{
    int id;
    std::string firstName;
    std::string lastName;
    unsigned int salary;
};

int main()
{
    /**
     * This is a type-safe enumeration called MyEnum . These enumeration value names are not
     * automatically exported to the enclosing scope, which means you always have to use the scope
     * resolution operator:
     */
    
    MyEnum value1 = MyEnum::EnumValue1;

    Employee employee;

    employee.id = 01;
    employee.firstName = "Campeanu";
    employee.lastName = "Vasile";
    employee.salary = 1234;

    std::cout << employee.id << " " << employee.firstName << " " << employee.lastName << " salary" << employee.salary << std::endl;

    return 0;
}
