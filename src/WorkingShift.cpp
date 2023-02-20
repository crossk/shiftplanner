#include "WorkingShift.hpp"

WorkingShift::WorkingShift()
{

}

WorkingShift::WorkingShift(WorkingShiftType type) :
    _shiftType(type)
{

}

void WorkingShift::assignEmployee(const Employee &employee)
{
    this->_assignedEmployees.push_back(employee);
}

void WorkingShift::removeEmployee(const Employee &employee)
{

}

void WorkingShift::printEmployees()
{
    std::cout << "Employees in the " << this->workingShiftTypeToString() << std::endl;
    for(Employee & emp : this->_assignedEmployees)
    {
        emp.printInformation();
    }
}

bool WorkingShift::hasEmployeeAssigned(const Employee &employee)
{
    return true;
}

std::string WorkingShift::workingShiftTypeToString()
{
    std::string text;
    switch(this->_shiftType)
    {
    case WorkingShiftType::EarlyShift: text = "Early Shift"; break;
    case WorkingShiftType::LateShift: text = "Late Shift"; break;
    case WorkingShiftType::None: text = "None"; break;
    }
    return text;
}
