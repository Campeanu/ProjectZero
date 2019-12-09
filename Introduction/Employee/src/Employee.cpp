#include "Employee.h"

namespace Records {
    
    Employee::Employee(std::string firstName, std::string lastName, int salary)
        : firstName{firstName}, lastName{lastName}, salary{salary}
    {
        std::cout << __PRETTY_FUNCTION__ << "\n";
        this->hired = true;
    }
    
    Employee()
    {
        std::cout << __PRETTY_FUNCTION__ << "\n";
    }
    
    Employee::~Employee()
    {
        std::cout << __PRETTY_FUNCTION__ << "\n";
    }
    
    void Employee::promote(int raiseAmount)
    {
        this->salary += raiseAmount;
    }
    
    void Employee::demoteAMount(int raiseAmount)
    {
        this->salary -= raiseAmount;
    }
    
    void Employee::fire()
    {
        this->hired = false;
    }
    
    bool Employee::getIsHired() const
    {
        return this->hired;
    }
    
    void Employee::display()
    {
        std::cout << this->get_firstName() << " " << this->get_lastName() << " " << this->get_salary() << " " << this->getIsHired() << " \n";
    }
    
    void Employee::set_fisrstName(std::string& fname)
    {
        this->firstName = fname;
    }
    
    const std::string&  Employee::get_firstName() const
    {
        return this->firstName;
    }
    
    void Employee::set_lastName(std::string& lname)
    {
        this->lastName = lname;
    }
    
    const std::string& Employee::get_lastName() const
    {
        return this->lastName;
    }
    
    void Employee::set_salary(int salary)
    {
        this->salary = salary;
    }
    
    int Employee::get_salary() const
    {
        return this->salary;
    }
    
}