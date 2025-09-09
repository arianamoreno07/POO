#pragma once
#include "Prerequisites.h" 

class
	Rectangulo {

public: 
	Rectangulo(double ancho, double alto) : m_ancho(ancho), m_alto(alto) {};
	~Rectangulo() = default; 

	double area() const {
		return m_ancho * m_alto;
	}
	double perimetro() const {
		return 2 * (m_ancho + m_alto);
	}
	double 
		getAncho() const {
		return 2 * (m_ancho * m_alto);
	}

	double 
		getAlto() const {
		return m_ancho;

	}

private: 

	double m_ancho;
	double m_alto;
};