#include "Prerequisites.h"
#include "programmingPatterns/Adapter/CuadradoAdapter.h"
#include "programmingPatterns/Adapter/CirculoAdapter.h"
#include "programmingPatterns/Adapter/Dibujable.h"

int main() {

	Circulo* circulo = new Circulo();
	Cuadrado* cuadrado = new Cuadrado();

	dibujar* dibujoCirculo = new CirculoAdapter(circulo);
	dibujar* dibujoCuadrado = new CuadradoAdapter(cuadrado);

	dibujoCirculo->metododibujar();	
	dibujoCuadrado->metododibujar();

	delete circulo;
	delete cuadrado;
	delete dibujoCirculo;
	delete dibujoCuadrado;
	
    
    return 0;
}