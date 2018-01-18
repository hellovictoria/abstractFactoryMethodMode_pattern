#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include <iostream>

void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

void Pizza::setName(std::string name)
{
    this->name =name;
}

std::string Pizza::getName()
{
    return this->name;
}

CheesePizza::CheesePizza(PizzaIngredientFactory *ingreFac)
{
    this->ingredientFac = ingreFac;
}

void CheesePizza::prepare()
{
    std::cout << "Preparing " + this->name << std::endl;
    this->dough = (this->ingredientFac)->createDough();
    std::cout << "Tossing " << (this->dough)->getName() << std::endl;
    this->sauce = (this->ingredientFac)->createSauce();
    std::cout << "Adding " << (this->sauce)->getName() << std::endl;
    this->vveggies = (this->ingredientFac)->createVeggies();
    std::cout << "Adding toppings:";
    for(auto iter= (this->vveggies).begin();iter!=(this->vveggies).end();iter++)
    {
        std::cout << " " << (*iter)->getName();
    }
    std::cout << std::endl;
    this->cheese = (this->ingredientFac)->createCheese();
    std::cout << "Adding " << (this->cheese)->getName() << std::endl;
    this->pepperoni = (this->ingredientFac)->createPepperoni();
    std::cout << "Adding " << (this->pepperoni)->getName() << std::endl;
    this->clam = (this->ingredientFac)->createClam();
    std::cout << "Adding " << (this->clam)->getName() << std::endl;
}

ClamPizza::ClamPizza(PizzaIngredientFactory *ingreFac)
{
    this->ingredientFac = ingreFac;
}

void ClamPizza::prepare()
{
    std::cout << "Preparing " + this->name;
    this->dough = (this->ingredientFac)->createDough();
    this->sauce = (this->ingredientFac)->createSauce();
    this->cheese = (this->ingredientFac)->createCheese();
}
