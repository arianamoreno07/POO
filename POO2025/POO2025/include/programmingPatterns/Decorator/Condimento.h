#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Decorator/Cafeteria.h"

class Condimento : public Cafeteria {

public:
	
	Condimento(Cafeteria* cafe) : cafeDecorado(cafe) {}
	virtual ~Condimento() = default;

protected:
	Cafeteria* cafeDecorado;
};