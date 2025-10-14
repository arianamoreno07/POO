#include "Prerequisites.h"
#include "programmingPatterns/MiSingleton.h"
#include "programmingPatterns/RegistroActividad.h"
#include "programmingPatterns/factoryMethod.h"
#include "programmingPatterns/Vehiculos.h"
#include "programmingPatterns/AbstractFactory.h"
#include "programmingPatterns/AbstractFactory/FactoriaMuebles.h"
#include "programmingPatterns/AbstractFactory/FactoriaMueblesModernos.h"
#include "programmingPatterns/AbstractFactory/FactoriaMueblesRusticos.h" 
#include "programmingPatterns/AbstractFactory/Mueble.h"
#include "programmingPatterns/AbstractFactory/Silla.h"
#include "programmingPatterns/AbstractFactory/Mesa.h"

// Inicializamos l a instancia estatica
MiSingleton* MiSingleton::instance = nullptr;

RegistroActividad* RegistroActividad::instancie = nullptr;

int main() {

	RegistroActividad* registro1 = RegistroActividad::obtenerInstancia();
	RegistroActividad* registro2 = RegistroActividad::obtenerInstancia();

	std::cout << "\n---------------------Practica 1---------------------- " << std::endl;
	registro1->agregarActividad("Inicio de sesion");
	registro1->agregarActividad("usuario abrio configuracion");
	registro1->agregarActividad("Usuario cerro sesion");

	registro2->mostrarActividades();

	std::cout << "\n Apuntan al mismo objeto? "
		<< (registro1 == registro2 ? "Si" : "No") << std::endl;
	std::cout << "\n------------------------------------------------------ " << std::endl;

	std::cout << "\n--------------------Practica 2------------------- " << std::endl;

	FactoryVehiculo* factoryCoche = new FactoryCoche();
	Vehiculo* Coche = factoryCoche->crearVehiculo();
	Coche->descripcion();

	FactoryBicicleta* factoryBicicleta = new FactoryBicicleta();
	Vehiculo* Bicicleta = factoryBicicleta->crearVehiculo();
	Bicicleta->descripcion();

	delete Coche;
	delete Bicicleta;
	delete factoryCoche;
	delete factoryBicicleta;

	std::cout << "\n--------------------Practica 3------------------- " << std::endl;

	FactoriaMuebles* fabrica = new FactoriaMueblesModernos();

    Mueble* silla = fabrica->crearSilla();
    Mueble* mesa = fabrica->crearMesa();

    std:: cout << "\n=== MUEBLES MODERNOS ===\n";
    silla->descripcion();
    silla->color();

    mesa->descripcion();
    mesa->color();

    delete silla;
    delete mesa;
    delete fabrica;

	return 0;

}

