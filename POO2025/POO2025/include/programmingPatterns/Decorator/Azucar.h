#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Decorator/Condimento.h"
#include "programmingPatterns/Decorator/Cafeteria.h"

class Azucar : public Condimento {

public:

	Azucar(Cafeteria* cafe) : Condimento(cafe) {}
	~Azucar() = default;

	void prepararCafe() override {
		cafeDecorado->prepararCafe();

		std::cout << " Azucar agregada al cafe" << std::endl;
	}
};