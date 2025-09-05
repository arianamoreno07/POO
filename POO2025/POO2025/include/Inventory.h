#pragma once
#include "Prerequisites.h"
#include "Item.h"

class
Inventory {

public: 
 Inventory() = default;
~Inventory() = default; 

void
addItem(const std::string& name, int quantity) {
	//SE BUSCARA QUE EXISTA EL ELEMENTO A AGREGAR PARA INCREMENTAR SU CANTIDAD
	for (auto& item : m_items) {
		if (item.getName() == name) {
			item.add(quantity);
			return;
		}

	}
	//SI NO EXISTE SE AGREGA UN NUEVO ITEM
	m_items.emplace_back(name, quantity); 
}

void 
showInventory() const {
	//Verificar que el invetario No este vacio
	if (m_items.empty()) {

		std::cout << "El inventario esta vacio. : " << std::endl;
		return;

	}
	//Mostrar los items del inventario
	std::cout << "Inventario: " << std::endl;
	for (const auto& item : m_items) {
		std::cout << "- " << item.getName() << ": " << item.getQuantity() << std::endl;
	}
}
void
useItem(const std::string& name, int quantity) {
	for (auto& item : m_items) {
		if (item.getName() == name) {
			item.remove(quantity); 
			//Si la cantidad del item es 0, se elimina del inventario. 
			if (item.getQuantity() == 0) {
				m_items.erase(std::remove(m_items.begin(), m_items.end(), item), m_items.end());
			}
			std::cout << "Usaste " << quantity << " de " << name << "(s)." << std::endl;
			return;
		}
	}
	std::cout << "No tienes " << name << "en el inventario. " << std::endl; 
}

private: 
	std::vector<Item> m_items; 


}; 

