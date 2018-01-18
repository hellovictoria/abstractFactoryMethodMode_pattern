#ifndef _SAUCE_H
#define _SAUCE_H
#include <string>

class Sauce
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class MarinaraSauce : public Sauce
{
    public:
        MarinaraSauce();
};

#endif
