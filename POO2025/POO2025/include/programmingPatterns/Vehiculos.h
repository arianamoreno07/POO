#pragma once
#include "Prerequisites.h"

class Vehiculo {
public:
	virtual void descripcion() const = 0;
	virtual ~Vehiculo() = default;
};

class FactoryVehiculo {
public:
	virtual Vehiculo* crearVehiculo() const = 0;
	virtual ~FactoryVehiculo() = default;
};

class Coche : public Vehiculo {
public:
	void descripcion() const override {
		std::cout << "Este es un coche." << std::endl;
	}
};

class bicicleta : public Vehiculo {
public: 
	void descripcion() const override {
		std::cout << "Esta es una bicicleta." << std::endl;
	}
};

class FactoryCoche : public FactoryVehiculo {
public:
	Vehiculo* crearVehiculo() const override {
		return new Coche();
	}
};

class FactoryBicicleta : public FactoryVehiculo {
public:
	Vehiculo* crearVehiculo() const override {
		return new bicicleta();
	}
};
