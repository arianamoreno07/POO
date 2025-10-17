#pragma once
#include "Documento.h"

class DocumentoPrototype : public Documento {
public:
    virtual DocumentoPrototype* clonar() const = 0; // Método virtual puro
    virtual void configurar(const std::string& nuevoContenido) = 0; // Modificar contenido
    virtual ~DocumentoPrototype() = default;
};