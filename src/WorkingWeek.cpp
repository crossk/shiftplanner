#include "WorkingWeek.hpp"

WorkingWeek::WorkingWeek() :
    _earlyShift(WorkingShiftType::EarlyShift),
    _lateShift(WorkingShiftType::LateShift),
    _weekOfYear(0)
{
}

void WorkingWeek::addEmployee(const Employee &employee, WorkingShiftType shiftType)
{
    if(shiftType == WorkingShiftType::EarlyShift)
    {
        this->_earlyShift.assignEmployee(employee);
    }
    else if(shiftType == WorkingShiftType::LateShift)
    {
        this->_lateShift.assignEmployee(employee);
    }
    else
    {
        std::cout << "Invalid working shift type" << std::endl;
    }
}

void WorkingWeek::setWeekOfTheYear(int week)
{
    this->_weekOfYear = week;
}

void WorkingWeek::printEarlyShift()
{
    this->_earlyShift.printEmployees();
}

void WorkingWeek::printLateShift()
{
    this->_lateShift.printEmployees();
}
