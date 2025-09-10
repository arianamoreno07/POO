#include "Prerequisites.h"
#include "Rectangulo.h"
#include "Circulo.h"

int
main() {

    Rectangulo rect(4.0, 5.0);
    std::cout << "Rectangulo - Ancho: " << rect.getAncho() << " Alto: " << rect.getAlto() << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimetro: " << rect.perimetro() << std::endl;

    Circulo cir(5);

    std::cout << "Circulo Diametro: " << cir.getDiametro() << std::endl;
    std::cout << "Area: " << cir.area() << std::endl;
    std::cout << "Perimetro: " << cir.perimetro() << std::endl;

    return 0;


    Fecha fecha;
    fecha.getFecha();
    std::cin.get();

    


    return 0;

};
