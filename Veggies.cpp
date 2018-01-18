#include "Veggies.h"

void Veggies::setName(std::string name)
{
    this->name = name;
}

std::string Veggies::getName()
{
    return this->name;
}

Garlic::Garlic()
{
    this->name = "Garlic";
}

Onion::Onion()
{
    this->name = "Onion";
}

Mushroom::Mushroom()
{
    this->name = "Mushroom";
}

RedPepper::RedPepper()
{
    this->name = "RedPepper";
}
