#include "programmingPatterns/Builder/Pizza.h"

void Pizza::mostrarPizza() {
    std::cout << "Pizza:" << std::endl;
    std::cout << "  Masa: " << masa << std::endl;
    std::cout << "  Salsa: " << salsa << std::endl;
    std::cout << "  Queso: " << queso << std::endl;
    std::cout << "  Ingredientes: ";
    for (const auto& ing : ingredientes) {
        std::cout << ing << " ";
    }
    std::cout << std::endl << std::endl;
}