#ifndef WORKINGWEEK_HPP
#define WORKINGWEEK_HPP

#include "Definitions.hpp"

#include "WorkingShift.hpp"

class WorkingWeek
{
public:
    WorkingWeek();

    void addEmployee(const Employee & employee, WorkingShiftType shiftType);

    void setWeekOfTheYear(int week);

    // Debug functions
    void printEarlyShift();
    void printLateShift();

private:
    /// \brief Early shift that contains a list of employees that work in this shift
    WorkingShift _earlyShift;

    /// \brief Late shift that contains a list of employees that work in this shift
    WorkingShift _lateShift;

    /// \brief
    int _weekOfYear;
};

#endif // WORKINGWEEK_HPP
