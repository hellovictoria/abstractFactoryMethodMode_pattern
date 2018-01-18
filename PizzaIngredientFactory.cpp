#include "PizzaIngredientFactory.h"
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

Dough* NYPizzaIngredientFactory::createDough()
{
    Dough* dough = new ThinCrustDough();
    return dough;
}

Sauce* NYPizzaIngredientFactory::createSauce()
{
    Sauce* sauce = new MarinaraSauce();
    return sauce;
}

Cheese* NYPizzaIngredientFactory::createCheese()
{
    Cheese* cheese = new RegginanoCheese();
    return cheese;
}

Pepperoni* NYPizzaIngredientFactory::createPepperoni()
{
    Pepperoni* pepper = new SlicedPepperoni();
    return pepper;
}

Clams* NYPizzaIngredientFactory::createClam()
{
    Clams* clams = new FreshClams();
    return clams;
}

std::vector<Veggies *> NYPizzaIngredientFactory::createVeggies()
{
    std::vector<Veggies *> veggies_vec;
    veggies_vec.push_back(new Garlic());
    veggies_vec.push_back(new Onion());
    veggies_vec.push_back(new Mushroom());
    veggies_vec.push_back(new RedPepper());
    return veggies_vec;
}


