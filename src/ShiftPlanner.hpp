#ifndef SHIFTPLANNER_HPP
#define SHIFTPLANNER_HPP

#include <vector>

#include <QFile>
#include <QTextStream>

#include "Employee.hpp"
#include "WorkingWeek.hpp"

class ShiftPlanner
{
public:
    ShiftPlanner();

    void importEmployees();

    void createWorkingShifts();

    // Debug functions
    void printImportedEmployees();

    void printWorkingWeeks();

private:
    /// \brief A list of all employees that are available
    std::vector<Employee> _availableEmployees;

    /// \brief A list of working weeks. A working week represents a week with planned shifts and employees
    std::vector<WorkingWeek> _workingWeeks;
};

#endif // SHIFTPLANNER_HPP
