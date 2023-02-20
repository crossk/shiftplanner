#include "ShiftPlanner.hpp"

#include <cstdlib>
#include <iostream>
#include <QRandomGenerator>

ShiftPlanner::ShiftPlanner()
{

}

void ShiftPlanner::importEmployees()
{
    QFile employees("employees.txt");
    if(employees.open(QIODevice::ReadOnly))
    {
        QTextStream inputStream(&employees);
        while(!inputStream.atEnd())
        {
            QString line = inputStream.readLine();
            if(line.first(1) != "#")
            {
                QStringList tokens = line.split(" ");
                // Firstname, Lastname, CraneOperator, ...

                bool isCraneOperator = tokens.last() == "Yes" ? true : false;
                ProfessionType profession = ProfessionType::DefaultWorker;
                if(isCraneOperator)
                {
                    profession = ProfessionType::CraneOperator;
                }

                Employee empl(tokens.at(0).toStdString(), tokens.at(1).toStdString(), profession);
                this->_availableEmployees.push_back(empl);
            }
            else
            {
                std::cout << "Skipping line '" << line.toStdString() << "'" << std::endl;
            }
        }
    }

    this->printImportedEmployees();
}

void ShiftPlanner::createWorkingShifts()
{
    int weekCount = 4;

    std::vector<Employee> alreadyAssignedEmployees;

    for(int i = 0; i < weekCount; i++)
    {
        WorkingWeek week;

//        int randomEmployee1 = QRandomGenerator::global()->bounded(0, 7);
//        int randomEmployee2 = QRandomGenerator::global()->bounded(0, 7);
//        week.addEmployee(this->_availableEmployees.at(randomEmployee1), WorkingShiftType::EarlyShift);
//        week.addEmployee(this->_availableEmployees.at(randomEmployee2), WorkingShiftType::LateShift);
        this->_workingWeeks.push_back(week);
    }

    this->printWorkingWeeks();
}

void ShiftPlanner::printImportedEmployees()
{
    std::cout << "Imported " << this->_availableEmployees.size() << " employees:" << std::endl;
    int i = 0;
    for(Employee & empl : this->_availableEmployees)
    {
        std::cout << ++i << " ";
        empl.printInformation();
    }
}

void ShiftPlanner::printWorkingWeeks()
{
    for(WorkingWeek & week : this->_workingWeeks)
    {
        week.printEarlyShift();
        week.printLateShift();
    }
}

