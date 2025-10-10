#pragma once
#include "Prerequisites.h"

class RegistroActividad {

private:
	static RegistroActividad* instancie;

	std::vector<std::string> actividades;

	RegistroActividad() {} 

public: 
	static RegistroActividad* obtenerInstancia() {
		if (instancie == nullptr) {
			instancie = new RegistroActividad();
		}
		return instancie;
	}

	void agregarActividad(const std::string& actividad) {
		actividades.push_back(actividad);
	}

	void mostrarActividades() {

		std::cout << "Registro de Actividades:" << std::endl;
		for (const auto& actividad : actividades) {
			std::cout << "- " << actividad << std::endl;
		}
	}
};