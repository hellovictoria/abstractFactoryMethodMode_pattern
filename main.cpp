#include "PizzaStore.h"
#include "Pizza.h"
#include <iostream>
#include <string>

int main()
{
    PizzaStore * nyStore = new NYPizzaStore();

    Pizza *piz = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << piz->getName() << std::endl;

    return 0;
}
