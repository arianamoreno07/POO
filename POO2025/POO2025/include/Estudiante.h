#pragma once
#include "Prerequisites.h"

class Estudiante {

public:
	Estudiante() = default;
	~Estudiante() = default; 

	void 
		setEstudiante(const std::string& nombre, int edad) {

		m_nombre = nombre;
		m_edad = edad;
	}

	void
		Informacion() {
		std::cout << "Nombre: " << m_nombre << ", Edad: " << m_edad << " anos. " << std::endl;
	}

private: 
	std::string m_nombre;
	int m_edad;

	
};
