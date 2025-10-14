#pragma once
#include "Prerequisites.h"


class Mueble {
public:
    virtual void descripcion() const = 0;
    virtual void color() const = 0;
    virtual ~Mueble() = default;
};

