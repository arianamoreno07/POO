#pragma once
#include "Prerequisites.h"

//Producto abstracto

class 
ProductoA {
public:
	virtual void 
	operacionA() const = 0;

	virtual 
	~ProductoA() = default;
};


