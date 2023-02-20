#include "WorkingShiftRules.hpp"

WorkingShiftRules::WorkingShiftRules(int minimumRequiredCraneOperators) :
    _minimumRequiredCraneOperators(minimumRequiredCraneOperators)
{

}

int WorkingShiftRules::minimumRequiredCraneOperators()
{
    return this->_minimumRequiredCraneOperators;
}
