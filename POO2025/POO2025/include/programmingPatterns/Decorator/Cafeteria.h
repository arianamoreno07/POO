#pragma once
#include "Prerequisites.h"

class 
Cafeteria {

public: 

	virtual ~Cafeteria() = default;

	virtual void prepararCafe() {
		std::cout << "Cafe preparado" << std::endl;
	}

	};