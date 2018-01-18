#ifndef _PIZZAINGREDIENTFACTORY_H
#define _PIZZAINGREDIENTFACTORY_H
#include <vector>

#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

class PizzaIngredientFactory
{
    public:
        virtual Dough* createDough()=0;
        virtual Sauce* createSauce()=0;
        virtual Cheese* createCheese()=0;
        virtual std::vector<Veggies *> createVeggies()=0;
        virtual Pepperoni* createPepperoni()=0;
        virtual Clams* createClam()=0;
};


class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
    public:
        virtual Dough* createDough();
        virtual Sauce* createSauce();
        virtual Cheese* createCheese();
        virtual std::vector<Veggies *> createVeggies();
        virtual Pepperoni* createPepperoni();
        virtual Clams* createClam();
};

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
    public:
        virtual Dough* createDough();
        virtual Sauce* createSauce();
        virtual Cheese* createCheese();
        virtual std::vector<Veggies *> createVeggies();
        virtual Pepperoni* createPepperoni();
        virtual Clams* createClam();
};

#endif

