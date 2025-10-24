#pragma once

#include "Prerequisites.h"
#include "programmingPatterns/Composite/Carpeta.h"
#include "programmingPatterns/Composite/Sistema.h"


class SistemaCarpeta : public Carpeta, public Sistema {

public:
	SistemaCarpeta() = default;
	~SistemaCarpeta() = default;

	void agregarSistema(Sistema* sistema) {
		sistemas_.push_back(sistema);
	}

	void mostrarInfo() override {
		Carpeta::mostrar();
		std::cout << "Contiene los siguientes sistemas:" << std::endl;
		for (const auto& sistema : sistemas_) {
			sistema->mostrarInfo();
		}
	}
private:

	std::vector<Sistema*> sistemas_;

};