#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Composite/Archivo.h"
#include "programmingPatterns/Composite/Sistema.h"

class SistemaArchivo : public Archivo, public Sistema {

public:
	SistemaArchivo() = default;
	~SistemaArchivo() = default;

	void mostrarInfo() override {
		Archivo::mostrar();
		std:: cout<< "Archivo en el sistema." << std::endl;
	}

	private:
		std::string nombre_;

};