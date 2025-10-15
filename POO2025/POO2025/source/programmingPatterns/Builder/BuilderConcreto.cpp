#include "ProgrammingPatterns/Builder/BuilderConcreto.h"

BuilderConcreto::BuilderConcreto() {
	producto = new Producto();
}

void 
BuilderConcreto::buildParteA() {
	if (producto) {
		producto->add("\nParte A");
	}
}

void 
BuilderConcreto::buildParteB() {
	if (producto) {
		producto->add("\nParte B");
	}
}

Producto*
BuilderConcreto::getProducto() {
	if (producto) {
		return producto;

	}
	return nullptr;
}