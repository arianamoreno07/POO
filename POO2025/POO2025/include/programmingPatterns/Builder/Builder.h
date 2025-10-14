#pragma once

class Producto; // forward declaration

class Builder {
public:
    Builder() = default;
    virtual ~Builder() = default;

    virtual void buildParteA() = 0;
    virtual void buildParteB() = 0;
    virtual Producto* getProducto() = 0;
};
