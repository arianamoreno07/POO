#pragma once
#include "Prerequisites.h"
#include "Silla.h"
#include "Mesa.h"


class FactoriaMuebles {
public:
    virtual Mueble* crearSilla() = 0;
    virtual Mueble* crearMesa() = 0;
    virtual ~FactoriaMuebles() = default;
};
