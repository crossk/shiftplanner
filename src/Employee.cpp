#include "Employee.hpp"

#include <QString>

Employee::Employee()
{
    // Nothing to do
}

Employee::Employee(const std::string &firstName, const std::string lastName) :
    _firstName(firstName),
    _lastName(lastName),
    _profession(ProfessionType::None),
    _currentShift(WorkingShiftType::None),
    _lastShift(WorkingShiftType::None)
{

}

Employee::Employee(const std::string &firstName, const std::string lastName, ProfessionType profession) :
    _firstName(firstName),
    _lastName(lastName),
    _profession(profession),
    _currentShift(WorkingShiftType::None),
    _lastShift(WorkingShiftType::None)
{

}

Employee::Employee(const std::string &firstName, const std::string lastName, ProfessionType profession, WorkingShiftType currentShift) :
    _firstName(firstName),
    _lastName(lastName),
    _profession(profession),
    _currentShift(currentShift),
    _lastShift(currentShift)
{

}

std::string Employee::firstName() const
{
    return this->_firstName;
}

std::string Employee::lastName() const
{
    return this->_lastName;
}

std::string Employee::fullName() const
{
    std::string fullName = this->_firstName;
    fullName.append(" ").append(this->_lastName);
    return fullName;
}

ProfessionType Employee::professionType() const
{
    return this->_profession;
}

std::string Employee::professionToString() const
{
    std::string text = "None";
    switch(this->_profession)
    {
    case ProfessionType::CraneOperator: text = "Crane Operator"; break;
    case ProfessionType::DefaultWorker: text = "Default Worker"; break;
    default: break;
    }

    return text;
}

void Employee::setCurrentShift(WorkingShiftType type)
{
    // Remember last shift
    this->_lastShift = this->_currentShift;

    // Set new shift
    this->_currentShift = type;
}

void Employee::printInformation()
{
    QString infotext = "My name is %1 and I am a %2";
    infotext.replace("%1", QString(this->fullName().c_str()));
    infotext.replace("%2", QString(this->professionToString().c_str()));
    std::cout << infotext.toStdString() << std::endl;
}
