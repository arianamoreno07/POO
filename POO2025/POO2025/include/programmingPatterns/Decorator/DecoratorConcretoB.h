#pragma once
#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Decorator/Decorator.h"

class
	DecoratorConcretoB : public Decorator {

public:
	DecoratorConcretoB(Componente* _componente) : Decorator(_componente) {}
	~DecoratorConcretoB() = default;

	void
		operacion() override {
		Decorator::operacion();
		std::cout << "DecoratorConcretoA: Agregando funcionalidad B" << std::endl;
	}

};