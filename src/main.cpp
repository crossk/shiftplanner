#include <QCoreApplication>

#include "ShiftPlanner.hpp"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ShiftPlanner shiftPlanner;
    shiftPlanner.importEmployees();
    shiftPlanner.createWorkingShifts();

    return a.exec();
}
