#ifndef _DOUGH_H
#define _DOUGH_H
#include <string>


class Dough
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class ThinCrustDough : public Dough
{
    public:
        ThinCrustDough();
};

#endif
