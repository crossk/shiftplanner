#ifndef WORKINGSHIFTRULES_HPP
#define WORKINGSHIFTRULES_HPP


class WorkingShiftRules
{
public:
    WorkingShiftRules(int minimumRequiredCraneOperators);

    int minimumRequiredCraneOperators();

private:
    int _minimumRequiredCraneOperators;
};

#endif // WORKINGSHIFTRULES_HPP
