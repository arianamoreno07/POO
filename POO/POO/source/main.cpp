#include "Prerequisites.h"

// crear una clase Inventario
class
	Inventario {
public:
	// constructor por defecto
	Inventario() = default;

	// constructor con capacidad
	Inventario(int capacity) : m_capacity(capacity) {}

	// agregar un item
	void
		agregarItem(int item) {
		if (m_numeroItems < m_capacity) {
			m_items[m_numeroItems] = item;
			m_numeroItems++;
			std::cout << "Se agreg� el item n�mero: " << item << std::endl;
		}
		else {
			std::cout << "Inventario lleno, no se puede agregar el item: " << item << std::endl;
		}
	}

	// mostrar los items
	void
		mostrarItems() const {
		if (m_numeroItems == 0) {
			std::cout << "El inventario est� vac�o" << std::endl;
		}
		else {
			std::cout << "Inventario:" << std::endl;
			for (int i = 0; i < m_numeroItems; i++) {
				std::cout << "- Item " << m_items[i] << std::endl;
			}
		}
	}

	// obtener capacidad m�xima
	int
		getCapacity() const {
		return m_capacity;
	}

	// cambiar capacidad m�xima
	void
		setCapacity(int capacity) {
		m_capacity = capacity;
	}

	// obtener n�mero de items actuales
	int
		getNumeroItems() const {
		return m_numeroItems;
	}

private:
	int m_items[10];       // arreglo de items
	int m_numeroItems = 0; // n�mero actual de items
	int m_capacity = 5;    // capacidad m�xima por defecto

protected:
	// si quieres usarlo en clases derivadas
	int m_capacity;
};

// funci�n principal
int
main() {
	Inventario mochila(5);

	mochila.agregarItem(1);
	mochila.agregarItem(2);
	mochila.agregarItem(3);
	mochila.agregarItem(4);
	mochila.agregarItem(5);
	mochila.agregarItem(6); // intento de agregar m�s de la capacidad

	mochila.mostrarItems();

	if (mochila.getNumeroItems() >= mochila.getCapacity()) {
		std::cout << "Inventario lleno." << std::endl;
	}

	return 0;
}
