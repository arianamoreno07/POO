#pragma once
#include "ProgrammingPatterns\Prototype\Prototype.h"
#include "Prerequisites.h"
class
PrototypeConcreto : public Prototype {
public:
	PrototypeConcreto() = default;
	~PrototypeConcreto() = default;

	Prototype* 
	clone() const override {
		PrototypeConcreto* copy = new PrototypeConcreto();
		copy->config("Clon");
		return copy;
	}

	void 
	config(const std::string _value) override {
		value = _value;
	}

	void 
	info() const override {
		std::cout << "Prototype Concreto with value: " << std::endl;
	}

private:
	std::string value;
};
