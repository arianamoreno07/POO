#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Adapter/Cuadrado.h"
#include "programmingPatterns/Adapter/Dibujable.h"

class 
	CuadradoAdapter : public dibujar {

public:
	CuadradoAdapter(Cuadrado* _cuadrado) : cuadrado(*_cuadrado) {}
	~CuadradoAdapter() = default;
	void 
		metododibujar() override {
		std::cout << "Adaptando el metodo de dibujo del cuadrado." << std::endl;
		cuadrado.metododibujar();
	}
private:
	Cuadrado cuadrado;
};
