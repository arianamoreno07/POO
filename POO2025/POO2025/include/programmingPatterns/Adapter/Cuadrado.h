#pragma once
#include "Prerequisites.h"

class
Cuadrado {

public: 

	Cuadrado() = default;
	~Cuadrado() = default;

	virtual void
	metododibujar() {
		std::cout << "Dibujando un cuadrado." << std::endl;
	}


};