#include "ProgrammingPatterns/Builder/ConstructorPizzaHawaiana.h"

void ConstructorPizzaHawaiana::construirMasa() {
    pizza->masa = "Suave";
}
void ConstructorPizzaHawaiana::construirSalsa() {
    pizza->salsa = "Dulce";
}
void ConstructorPizzaHawaiana::construirQueso() {
    pizza->queso = "Mozzarella";
}
void ConstructorPizzaHawaiana::construirIngredientes() {
    pizza->ingredientes = { "Jamon", "Pina" };
}