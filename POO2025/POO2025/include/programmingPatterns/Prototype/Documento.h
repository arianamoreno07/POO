#pragma once
#include "Prerequisites.h"

class Documento {
protected:
    std::string contenido;

public:
    void configurar(const std::string& nuevoContenido) {
        contenido = nuevoContenido;
    }

    void mostrar() const {
        std::cout << "Contenido: " << contenido << std::endl;
    }

    std::string obtenerContenido() const {
        return contenido;
    }
};
