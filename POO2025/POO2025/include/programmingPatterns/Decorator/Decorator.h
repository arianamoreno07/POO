#pragma once
#include "programmingPatterns/Decorator/Componente.h"

class Decorator : public Componente {

public:
	Decorator(Componente* _componente) : componente(_componente) {}
	~Decorator() = default;

	void
		operacion() override {
		componente->operacion();
	}

private:
	Componente* componente;

};