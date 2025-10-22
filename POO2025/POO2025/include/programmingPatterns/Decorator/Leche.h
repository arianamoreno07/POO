#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Decorator/Condimento.h"
#include "programmingPatterns/Decorator/Cafeteria.h"

class Leche : public Condimento {

	public:

		Leche(Cafeteria* cafe) : Condimento(cafe) {}
		~Leche() = default;

	void prepararCafe() override {
		cafeDecorado->prepararCafe();
		
		std::cout << " Leche agregada al cafe" << std::endl;
	}
};