#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

namespace Records {
    class Employee {
        public:
        Employee();
        Employee(std::string firstName, std::string lastName, int salary = 2002);
        ~Employee();
        
        void promote(int raiseAmount = 1001);
        void demoteAMount(int raiseAmount = 1001);
        
        void fire();
        void display();
        
        void set_fisrstName(std::string& fname);
        const std::string& get_firstName() const;
        
        void set_lastName(std::string& lname);
        const std::string& get_lastName() const;
        
        void set_salary(int salary);
        int get_salary() const;
        
        bool getIsHired() const;
        
        private:
        std::string firstName;
        std::string lastName;
        int salary;
        bool hired;
    };
}

#endif // EMPLOYE_H