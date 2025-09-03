#include "Prerequisites.h"

class
	Inventario {
public:

	Inventario() = default;


	Inventario(int capacity) : m_capacity(capacity) {}


	void agregarItem(int item) {


		if (m_numeroItems < m_capacity) {

			m_items[m_numeroItems] = item;
			m_numeroItems++;
			std::cout << "Se agrego el item numero: " << item << std::endl;

		}
		else {

			std::cout << "Inventario lleno, no se puede agregar " << item << std::endl;
		}
	}


	void mostrarItems() {
		if (m_numeroItems == 0) {

			std::cout << "El inventario esta vacio" << std::endl;
		}
		else {
			std::cout << "Inventario: " << std::endl;


			for (int i = 0; i < m_numeroItems; i++) {

				std::cout << "- Item " << m_items[i] << std::endl;
			}
		}

	}


	int getCapacity() const {
		return m_capacity;
	}

	void setCapacity(int capacity) {
		m_capacity = capacity;
	}

private:
	int m_items[10];
	int m_numeroItems = 0;
	int m_capacity = 5;

protected:
	int m_capacity;

};



int main() {

	Inventario mochila(10);


	mochila.agregarItem(1);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(2);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(3);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(4);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(5);



	if (mochila.getCapacity() <= 0) {
		std::cout << "Inventario lleno. " << std::endl;

	}

	return 0;
}