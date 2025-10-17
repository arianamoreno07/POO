#pragma once
#include "Prerequisites.h"

class 
Circulo {	

public: 
	Circulo() = default;
	~Circulo() = default;

	virtual void 
	metododibujar() {
		
	std::cout << "Dibujando un circulo." << std::endl;
	}

};
