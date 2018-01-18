#ifndef _CHEESE_H
#define _CHEESE_H
#include <string>

class Cheese
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class RegginanoCheese : public Cheese
{
    public:
        RegginanoCheese();
};

#endif
