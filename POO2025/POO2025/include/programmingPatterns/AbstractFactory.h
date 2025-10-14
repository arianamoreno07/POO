#pragma once
#include "Prerequisites.h"

// Clase base para productos A

class ProductoA {
public:
	virtual void operacionA() const = 0;
	virtual ~ProductoA() = default;

};

// Clase base para productos B

class ProductoB {
	public:
	virtual void operacionB() const = 0;
	virtual ~ProductoB() = default;

};

// Fabrica abstracta
class FabricaAbstracta {
	public:
	virtual ProductoA* crearProductoA() const = 0;
	virtual ProductoB* crearProductoB() const = 0;
	virtual ~FabricaAbstracta() = default;
};

// Producto A1 concreto
class ProductoA1 : public ProductoA {
	public:
	void operacionA() const override {
		std::cout << "Operacion del Producto A1" << std::endl;
	}
};