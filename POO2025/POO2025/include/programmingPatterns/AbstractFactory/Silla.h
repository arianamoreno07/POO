#pragma once

#include "Prerequisites.h"
#include "Mueble.h"


class Silla : public Mueble {
    std:: string tipo;
    std:: string tono;
public:
    Silla(const std:: string& t, const std:: string& c) : tipo(t), tono(c) {}

    void descripcion() const override {
        std:: cout << "Soy una silla " << tipo << "." << std:: endl;
    }

    void color() const override {
        std:: cout << "Mi color es " << tono << "." << std:: endl;
    }
};