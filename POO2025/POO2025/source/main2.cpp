#include "Prerequisites.h"
#include "programmingPatterns\Prototype\Prototype.h"
#include "programmingPatterns\Prototype\PrototypeConcreto.h"



int main() {
	Prototype* original = new PrototypeConcreto();
	original->config("Original");

	//Clonar el prototipo
	Prototype* clone = original->clone();
	clone->config("Clone");
	//Mostrar informacion
	original->info();
	clone->info();

	delete original;
	delete clone;

    return 0;
}