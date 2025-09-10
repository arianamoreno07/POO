#pragma once
#include "Prerequisites.h" 

class Circulo {
public:
    Circulo(double radio) : m_radio(radio) {}
    ~Circulo() = default;

    double area() const {
        return M_PI * m_radio * m_radio;
    }

    double perimetro() const {
        return 2 * M_PI * m_radio;
    }

    double getDiametro() const {
        return 2 * m_radio;
    }

private:
    double m_radio;
    double M_PI = 3.1416;
};