#ifndef _VEGGIES_H
#define _VEGGIES_H
#include <string>


class Veggies
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class Garlic : public Veggies
{
    public:
        Garlic();
};

class Onion : public Veggies
{
    public:
        Onion();
};

class Mushroom : public Veggies
{
    public:
        Mushroom();
};

class RedPepper : public Veggies
{
    public:
        RedPepper();
};


#endif
