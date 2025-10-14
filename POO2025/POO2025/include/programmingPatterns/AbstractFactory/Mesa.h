#pragma once
#include "Prerequisites.h"
#include "Mueble.h"

class Fabrica {
public:
    virtual Mueble* crearSilla() = 0;
    virtual Mueble* crearMesa() = 0;
    virtual ~Fabrica() = default;

};
class Mesa : public Mueble {
    std:: string tipo;
   std:: string tono;
public:
    Mesa(const std::string& t, const std:: string& c) : tipo(t), tono(c) {}

    void descripcion() const override {
       std:: cout << "Soy una mesa " << tipo << "." << std::endl;
    }

    void color() const override {
       std:: cout << "Mi color es " << tono << "." << std:: endl;
    }
};
