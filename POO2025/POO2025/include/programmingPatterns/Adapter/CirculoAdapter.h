#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Adapter/Circulo.h"
#include "programmingPatterns/Adapter/Dibujable.h"

class 
	CirculoAdapter : public dibujar {

public: 

	CirculoAdapter(Circulo* _circulo) : circulo(*_circulo) {}
	~CirculoAdapter() = default;

	void 
	metododibujar() override {
		std::cout << "Adaptando el metodo de dibujo del circulo." << std::endl;
		circulo.metododibujar();

	}

private: 

	Circulo circulo;
};

