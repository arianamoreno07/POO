#pragma once
#include "Prerequisites.h"
#include "FactoriaMuebles.h"

class FactoriaMueblesRusticos : public FactoriaMuebles {
public:
    Mueble* crearSilla() override {
        return new Silla("rústica de madera tallada", "marrón");
    }

    Mueble* crearMesa() override {
        return new Mesa("rústica de roble", "caoba");
    }
};