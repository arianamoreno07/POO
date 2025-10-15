#include "programmingPatterns/Builder/ConstructorPizza.h"

ConstructorPizza::ConstructorPizza() {
    pizza = new Pizza();
}

ConstructorPizza::~ConstructorPizza() {
    delete pizza;
}

Pizza* ConstructorPizza::getPizza() {
    return pizza;
}