#include "programmingPatterns/Builder/ConstructorPizzaVegetariana.h"

void ConstructorPizzaVegetariana::construirMasa() {
    pizza->masa = "Integral";
}
void ConstructorPizzaVegetariana::construirSalsa() {
    pizza->salsa = "Tomate";
}
void ConstructorPizzaVegetariana::construirQueso() {
    pizza->queso = "Vegano";
}
void ConstructorPizzaVegetariana::construirIngredientes() {
    pizza->ingredientes = { "Champinones", "Pimientos", "Cebolla", "Aceitunas" };
}