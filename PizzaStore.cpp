#include "PizzaStore.h"
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include <iostream>
#include <utility>
#include <map>

enum e_pizzaType
{
    e_cheese,e_pepperoni,e_clam,e_veggie
};

std::vector<std::string> vstr_pizzaType = {"cheese","pepperoni","clam","veggie"};

std::map<std::string,enum e_pizzaType> map_pizzaType;

Pizza* PizzaStore::orderPizza(std::string type)
{
    Pizza* piz;
    piz = createPizza(type);

    piz->prepare();
    piz->bake();
    piz->cut();
    piz->box();

    return piz;
}

void setMap_pizzaType()
{
    enum e_pizzaType j=e_cheese;
    for(auto iter=vstr_pizzaType.begin();iter!=vstr_pizzaType.end();iter++)
    {
        map_pizzaType.insert(std::pair<std::string,e_pizzaType>(*iter,j));
        j=(enum e_pizzaType)(j+1);
    }

    for(auto iter=map_pizzaType.begin();iter!=map_pizzaType.end();iter++)
    {
        std::cout << (*iter).first << " " << (*iter).second << std::endl;
    }
}

Pizza* NYPizzaStore::createPizza(std::string type)
{
    Pizza *piz = NULL;
    PizzaIngredientFactory *ingreFac = new NYPizzaIngredientFactory();
    switch(map_pizzaType[type])
    {
        case e_cheese:
            piz = new CheesePizza(ingreFac);
            piz->setName("New York Style Cheese Pizza");break;
        case e_pepperoni:
            //piz = new PepperoniPizza(ingreFac);
            //piz.setName("New York Style Pepperoni Pizza");break;
        case e_clam:
            //piz = new ClamPizza(ingreFac);
            //piz.setName("New York Style Clam Pizza");break;
        case e_veggie:
            //piz = new VeggiePizza(ingreFac);
            //piz.setName("New York style Veggie Pizza");break;
        default:
            break;
    }
    return piz;
}
