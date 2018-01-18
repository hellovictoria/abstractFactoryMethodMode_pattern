#include "Dough.h"

std::string Dough::getName()
{
    return this->name;
}


void Dough::setName(std::string name)
{
    this->name = name;
}

ThinCrustDough::ThinCrustDough()
{
    this->name = "Thin Crust Dough";
}
