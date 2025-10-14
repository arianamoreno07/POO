#pragma once
#include "Prerequisites.h"
#include "FactoriaMuebles.h"

class FactoriaMueblesModernos : public FactoriaMuebles {
public:
    Mueble* crearSilla() override {
        return new Silla("moderna de metal", "negro");
    }

    Mueble* crearMesa() override {
        return new Mesa("moderna de cristal", "blanco");
    }
};