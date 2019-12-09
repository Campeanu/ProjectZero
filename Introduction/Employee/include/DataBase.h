#ifndef DATABASE_H
#define DATABASE_H

#include <vector>

#include "Employee.h"

namespace Records {
    
    const int kFirstEmployeeNumber = 1000;
    
    class DataBase {
        public:
        DataBase();
        ~DataBase();
        
        /*NOTE(campeanu): integrate e emplyee in the database
        adnakjdnasjdaskljdbaskdbasjhdbasd
        asdasdas
        dasdadasd
        */
        
        Employee& addEmployee(const std::string& firstName, 
                              const std::string& lastName);
        
        Employee& getEmployee(int employeeNumber);
        Employee& getEmployee(const std::string& firstName, 
                              const std::string& lastName);
        
        void displayAll() const;
        void displayCurrent() const;
        void displayFormer() const;
        
        private:
        std::vector<Employee> mEmployees;
        int mNextEmployeeNumber;
    };
    
}

#endif // !_DATABASE_H