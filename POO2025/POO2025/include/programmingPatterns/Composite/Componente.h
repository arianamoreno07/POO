#pragma once
#include "Prerequisites.h"

class Componente {

	public:
	Componente() = default;
	virtual ~Componente() = default;
	virtual void 
	operacion() = 0;
};