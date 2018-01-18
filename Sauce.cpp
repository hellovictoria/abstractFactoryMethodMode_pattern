#include "Sauce.h"

void Sauce::setName(std::string name)
{
    this->name = name;
}

std::string Sauce::getName()
{
    return this->name;
}

MarinaraSauce::MarinaraSauce()
{
    this->name = "Marinara Sauce";
}
