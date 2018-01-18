#ifndef _PIZZA_H
#define _PIZZA_H
#include <string>
#include <vector>
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"
#include "PizzaIngredientFactory.h"

class Pizza
{
    public:
        virtual void prepare()=0;
        virtual void bake();
        virtual void cut();
        virtual void box();
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
        Dough* dough;
        Sauce* sauce;
        std::vector<Veggies *> vveggies;
        Cheese* cheese;
        Pepperoni* pepperoni;
        Clams* clam;
};

class CheesePizza : public Pizza
{
    public:
        CheesePizza(PizzaIngredientFactory *ingreFac);
        virtual void prepare();
    private:
        PizzaIngredientFactory *ingredientFac;
};

class ClamPizza : public Pizza
{
    public:
        ClamPizza(PizzaIngredientFactory *ingreFac);
        virtual void prepare();
    private:
        PizzaIngredientFactory *ingredientFac;
};

#endif
