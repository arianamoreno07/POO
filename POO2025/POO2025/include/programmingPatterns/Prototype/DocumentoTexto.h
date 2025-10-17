#pragma once

#include "DocumentoPrototype.h"

class DocumentoTexto : public DocumentoPrototype {
public:
    DocumentoTexto() = default;

    DocumentoTexto(const DocumentoTexto& otro) {
        contenido = otro.contenido;
    }

    DocumentoPrototype* clonar() const override {
        return new DocumentoTexto(*this);
    }

    void configurar(const std::string& nuevoContenido) override {
        contenido = "Texto: " + nuevoContenido;
    }
}; 