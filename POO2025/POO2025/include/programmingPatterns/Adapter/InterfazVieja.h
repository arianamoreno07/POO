#pragma once
#include "Prerequisites.h"

class 
InterfazVieja {
public: 
	InterfazVieja() = default;
	~InterfazVieja() = default;

	virtual void 
	metodoViejo() {
	std::cout << "Metodo de la Interfaz Vieja" << std::endl;
	}
};

