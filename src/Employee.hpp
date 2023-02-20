#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include <iostream>

#include "Definitions.hpp"

class Employee
{

//bool operator==(const Employee& leftObject, const Employee& rightObject)
//{
//    return (leftObject.firstName() == rightObject.firstName() && leftObject.lastName() == rightObject.lastName());
//}

public:
   Employee();
   Employee(const std::string & firstName, const std::string lastName);
   Employee(const std::string & firstName, const std::string lastName, ProfessionType profession);
   Employee(const std::string & firstName, const std::string lastName, ProfessionType profession, WorkingShiftType currentShift);

   std::string firstName() const;

   std::string lastName() const;

   std::string fullName() const;

   ProfessionType professionType() const;

   std::string professionToString() const;

   void setCurrentShift(WorkingShiftType type);

   // Debug functions
   void printInformation();

private:

    /// \brief First name of this employee
    std::string _firstName;

    /// \brief Last name of this employee
    std::string _lastName;

    /// \brief The profession of this employee
    ProfessionType _profession;

    /// \brief Last working shift
    WorkingShiftType _currentShift;

    /// \brief Current working shift
    WorkingShiftType _lastShift;
};

#endif // EMPLOYEE_HPP
