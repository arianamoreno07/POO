#include "programmingPatterns/Builder/Director.h"

void Director::construirPizza(ConstructorPizza* constructor) {
    constructor->construirMasa();
    constructor->construirSalsa();
    constructor->construirQueso();
    constructor->construirIngredientes();
}