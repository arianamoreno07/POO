#pragma once
#include "DocumentoPrototype.h"

class DocumentoImagen : public DocumentoPrototype {
public:
    DocumentoImagen() = default;

    DocumentoImagen(const DocumentoImagen& otro) {
        contenido = otro.contenido;
    }

    DocumentoPrototype* clonar() const override {
        return new DocumentoImagen(*this);
    }

    void configurar(const std::string& nuevoContenido) override {
        contenido = "Imagen: " + nuevoContenido;
    }
};