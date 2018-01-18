#include "Cheese.h"

void Cheese::setName(std::string name)
{
    this->name = name;
}

std::string Cheese::getName()
{
    return this->name;
}

RegginanoCheese::RegginanoCheese()
{
    this->name = "Regginano Cheese";
}
