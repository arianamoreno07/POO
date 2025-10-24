#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Composite/Componente.h"

class Hoja : public Componente {

public: 
	Hoja() = default;
	~Hoja() = default;

	void 
	operacion() override {
		std::cout << "Operacion realizada en la Hoja" << std::endl;
	}
};