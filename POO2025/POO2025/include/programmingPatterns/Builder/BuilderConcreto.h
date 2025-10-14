#pragma once
#include "Prerequisites.h"
#include "programmingPatterns/Builder/Builder.h"
#include "programmingPatterns/Builder/Producto.h" // aquí sí porque usamos Producto

class BuilderConcreto : public Builder {
public:
    BuilderConcreto();
    ~BuilderConcreto() override = default;

    void buildParteA() override;   // exactamente igual al base
    void buildParteB() override;   // exactamente igual al base
    Producto* getProducto() override;

private:
    Producto* producto;
};


