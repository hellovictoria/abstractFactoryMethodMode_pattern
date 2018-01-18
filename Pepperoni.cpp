#include "Pepperoni.h"

void Pepperoni::setName(std::string name)
{
    this->name = name;
}

std::string Pepperoni::getName()
{
    return this->name;
}

SlicedPepperoni::SlicedPepperoni()
{
    this->name = "Sliced Pepperoni";
}
