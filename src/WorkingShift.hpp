#ifndef WORKINGSHIFT_HPP
#define WORKINGSHIFT_HPP

#include "Employee.hpp"

#include <vector>

class WorkingShift
{
public:
    WorkingShift();
    WorkingShift(WorkingShiftType type);

    /// \brief Assigns an employee to this shift
    void assignEmployee(const Employee & employee);

    /// \brief Removes an employee from this shift
    void removeEmployee(const Employee & employee);

    // Debug functions
    void printEmployees();

private:
    bool hasEmployeeAssigned(const Employee & employee);

    std::string workingShiftTypeToString();

private:
    WorkingShiftType _shiftType;

    std::vector<Employee> _assignedEmployees;
};

#endif // WORKINGSHIFT_HPP
