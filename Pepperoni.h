#ifndef _PEPPERONI_H
#define _PEPPERONI_H
#include <string>

class Pepperoni
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class SlicedPepperoni : public Pepperoni
{
    public:
        SlicedPepperoni();
};


#endif
