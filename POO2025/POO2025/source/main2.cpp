#include "programmingPatterns/Builder/Director.h"
#include "programmingPatterns/Builder/ConstructorPizzaHawaiana.h"
#include "programmingPatterns/Builder/ConstructorPizzaVegetariana.h"


int main() {
    Director director;

    // Pizza Hawaiana
    ConstructorPizzaHawaiana constructorHawaiana;
    director.construirPizza(&constructorHawaiana);
    Pizza* hawaiana = constructorHawaiana.getPizza();
    hawaiana->mostrarPizza();

    // Pizza Vegetariana
    ConstructorPizzaVegetariana constructorVegetariana;
    director.construirPizza(&constructorVegetariana);
    Pizza* vegetariana = constructorVegetariana.getPizza();
    vegetariana->mostrarPizza();

    return 0;
}