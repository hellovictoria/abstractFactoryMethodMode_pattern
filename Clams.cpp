#include "Clams.h"

void Clams::setName(std::string name)
{
    this->name = name;
}

std::string Clams::getName()
{
    return this->name;
}

FreshClams::FreshClams()
{
    this->name = "Fresh Clams";
}
