#pragma once
#include "Prerequisites.h"

// Producto abastracto
class 
Producto {
 public:
	 virtual void operacion() const = 0;
	 virtual ~Producto() = default;
};

// Clase base para la fabrica 
class Fabrica {
 public:
	 virtual Producto* crearProducto() const = 0;
	 virtual ~Fabrica() = default;
};

// Producto concreto A
class ProductoA : public Producto {
 public:
	 void operacion() const override {
		 std::cout << "Operacion del Producto A" << std::endl;
	 }
};

// Fabrica concreta A
class FabricaA : public Fabrica {
 public:
	 Producto* crearProducto() const override {
		 return new ProductoA();
	 }
};