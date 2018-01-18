#ifndef _PIZZASTORE_H
#define _PIZZASTORE_H
#include <string>

class Pizza;

class PizzaStore
{
    public:
        Pizza* orderPizza(std::string type);
    protected:
        virtual Pizza* createPizza(std::string type)=0;
};

class NYPizzaStore : public PizzaStore
{
    protected:
        virtual Pizza* createPizza(std::string type);
};

class ChicagoStylePizzaStore : public PizzaStore
{
    protected:
        virtual Pizza* createPizza(std::string type);
};


#endif
