#pragma once
#include "programmingPatterns/Builder/Pizza.h"

class ConstructorPizza {
protected:
    Pizza* pizza;
public:
    ConstructorPizza();
    virtual ~ConstructorPizza();

    virtual void construirMasa() = 0;
    virtual void construirSalsa() = 0;
    virtual void construirQueso() = 0;
    virtual void construirIngredientes() = 0;

    Pizza* getPizza();
};
