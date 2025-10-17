#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Adapter/InterfazNueva.h"
#include "ProgrammingPatterns/Adapter/InterfazVieja.h"

class
Adaptador : public InterfazNueva {
public:
	Adaptador(InterfazVieja* _interfazVieja) : interfazVieja(*_interfazVieja) {}
	~Adaptador() = default;

	void 
	metodoNuevo() override {
		std:: cout << "Adaptador: Traduciendo metodoNuevo a metodoViejo" << std::endl;
		interfazVieja.metodoViejo();
	}

private:
	InterfazVieja interfazVieja;

};