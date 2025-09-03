#include "Prerequisites.h"

// crear una clase para almacenar los items
class
	Inventario {
public:
	//constructor 
	Inventario() = default;

	// constructor para definir la capacidad
	Inventario(int capacity) : m_capacity(capacity) {}

	//agregar un item al inventario
	void agregarItem(int item) {

		//verificar si hay espacio disponible en el inventario
		if (m_numeroItems < m_capacity) {

			m_items[m_numeroItems] = item; //we guarda el item
			m_numeroItems++; // se aumenta el contador
			std::cout << "Se agrego el item numero: " << item << std::endl;

		}
		else {
			//si el inventario esta lleno
			std::cout << "Inventario lleno, no se puede agregar " << item << std::endl; //
		}
	}

	//mostrar todos los items del inventario
	void mostrarItems() {
		if (m_numeroItems == 0) {

			std::cout << "El inventario esta vacio" << std::endl;
		}
		else {
			std::cout << "Inventario: " << std::endl;

			//recorre los items y los muestra uno por uno
			for (int i = 0; i < m_numeroItems; i++) {

				std::cout << "- Item " << m_items[i] << std::endl;
			}
		}

	}

	//conseguir la capacidad maxima del inventario
	int getCapacity() const {
		return m_capacity;
	}
	//cambiar la capacidad maxima del inventario
	void setCapacity(int capacity) {
		m_capacity = capacity;
	}

private:
	int m_items[10]; //arreglo donde se guarda los items
	int m_numeroItems = 0; // numero actual de items en el inventario
	int m_capacity = 5; //capacidad maxima por defecto

protected:
	int m_capacity;

};

// funcion principal del programa. 

int main() {
	//crear un inventario con capacidad de 10 items
	Inventario mochila(10);

	//agregar algunos items
	mochila.agregarItem(1);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(2);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(3);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(4);
	std::cout << mochila.getCapacity() << std::endl;
	mochila.agregarItem(5);


	//verificar si la mochila esta llena
	if (mochila.getCapacity() <= 0) {
		std::cout << "Inventario lleno. " << std::endl;

	}

	return 0;
}