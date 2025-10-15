#pragma once
#include "programmingPatterns/Builder/ConstructorPizza.h"

class ConstructorPizzaHawaiana : public ConstructorPizza {
public:
    void construirMasa() override;
    void construirSalsa() override;
    void construirQueso() override;
    void construirIngredientes() override;
};