#include "Prerequisites.h"
#include "rectangulo.h"



int
main() {

    Rectangulo rect(4.0, 5.0);
    std::cout << "Rectangulo - Ancho: " << rect.getAncho() << " Alto: " << rect.getAlto() << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimetro: " << rect.perimetro() << std::endl;

    Fecha fecha;
    fecha.getFecha();
    std::cin.get();


    return 0;

};
