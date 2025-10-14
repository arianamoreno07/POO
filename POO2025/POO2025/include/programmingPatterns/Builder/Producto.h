#pragma once
#include "Prerequisites.h"

class Producto {
public:
	Producto() = default;
	~Producto() = default;

	void 
	add(const std::string& parte) {
		partes.push_back(parte);
	}
	void
		show() const {
		std::cout << "Partes del producto: ";
		for (const auto& parte : partes) {
			std::cout << parte << " ";
		}
		std::cout << std::endl;
	}
private:
	std::vector<std::string> partes;
};	
