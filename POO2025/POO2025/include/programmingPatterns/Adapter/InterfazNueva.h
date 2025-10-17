#pragma once
#include "Prerequisites.h"

class
InterfazNueva {
public:
	InterfazNueva() = default;
	~InterfazNueva() = default;

	virtual void
		metodoNuevo() {
		std::cout << "Metodo de la Interfaz Nueva" << std::endl;
	}
};