#ifndef _CLAMS_H
#define _CLAMS_H
#include <string>

class Clams
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class FreshClams : public Clams
{
    public:
        FreshClams();
};


#endif
