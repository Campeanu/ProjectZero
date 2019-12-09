#include "DataBase.h"

namespace Records {
    
    DataBase::DataBase()
        : mNextEmployeeNumber(kFirstEmployeeNumber)
    {
        
    }
    
    DataBase::~DataBase()
    {
    }
    
    Employee& DataBase::addEmployee(const std::string& firstName, 
                                    const std::string& lastName)
    {
    }
    
    Employee& DataBase::getEmployee(int employeeNumber)
    {
        
    }
    
    Employee& DataBase::getEmployee(const std::string& firstName, 
                                    const std::string& lastName)
    {
    }
    
    void DataBase::displayAll() const
    {
    }
    
    void DataBase::displayCurrent() const
    {
    }
    
    void DataBase::displayFormer() const
    {
    }
    
}