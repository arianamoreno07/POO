#pragma once
#include "Prerequisites.h"
#include "FactoriaMuebles.h"

class FactoriaMueblesRusticos : public FactoriaMuebles {
public:
    Mueble* crearSilla() override {
        return new Silla("r�stica de madera tallada", "marr�n");
    }

    Mueble* crearMesa() override {
        return new Mesa("r�stica de roble", "caoba");
    }
};