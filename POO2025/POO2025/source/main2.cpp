#include "Prerequisites.h"
#include "programmingPatterns/MiSingleton.h"
#include "programmingPatterns/RegistroActividad.h"

// Inicializamos l a instancia estatica
MiSingleton* MiSingleton::instance = nullptr;

RegistroActividad* RegistroActividad::instancie = nullptr;

int main() {

	RegistroActividad* registro1 = RegistroActividad::obtenerInstancia();
	RegistroActividad* registro2 = RegistroActividad::obtenerInstancia();

	registro1->agregarActividad("Inicio de sesion");
	registro1->agregarActividad("usuario abrio configuracion");
	registro1->agregarActividad("Usuario cerro sesion");

	registro2->mostrarActividades();

	std::cout << "\n Apuntan al mismo objeto? "
		<< (registro1 == registro2 ? "Si" : "No") << std::endl;

	return 0;

}

