#include "Employee.h"

int main(void)
{
    Records::Employee* employee = new Records::Employee("Vasile", "Campeanu", 10001);
    employee->display();
    
    delete employee;
    return 0;
}