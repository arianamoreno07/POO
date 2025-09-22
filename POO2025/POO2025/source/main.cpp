#include "Prerequisites.h"
#include "Inventory.h"
#include "Rectangulo.h"
#include "Estudiante.h"
#include "Banco.h"
#include "UsuarioBancario.h"
#include "Producto.h"
// Crear un clase Character
class
    Character {
public:
    Character() = default;

    Character(int health) : m_health(health) {}

    void
        rebirth() {
        if (!isCharacterAlive && m_health <= 0) {
            std::cout << "El Character a revivido en el Spawn Point" << std::endl;
            isCharacterAlive = true;
        }
    }

    int
        getHealth() const {
        return m_health;
    }

    void
        setHealth(int health) {
        m_health = health;
    }

private:
    bool isCharacterAlive = false;

protected:
    int m_health;
};

// This function is in charge of being the entry point of the app.
int main() {
    Inventory inventory;
    inventory.addItem("Pocion de Vida", 5);
    inventory.addItem("Elixir de Mana", 3);
    inventory.addItem("Diamante", 64);

    inventory.useItem("Pocion de Vida", 2);
    inventory.showInventory();

    Rectangulo rect(4.0, 5.0);
    std::cout << "Rectangulo - Ancho: " << rect.getAncho() << ", Alto: " << rect.getAlto() << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimetro: " << rect.perimetro() << std::endl;

    Fecha fecha;
    fecha.getFecha();

    Estudiante estudiante[5];
    estudiante[0].setEstudiante("Juan Perez", 20);
    estudiante[1].setEstudiante("Maria Gomez", 22);
    estudiante[2].setEstudiante("Carlos Ruiz", 19);
    estudiante[3].setEstudiante("Ana Torres", 21);
    estudiante[4].setEstudiante("Luis Fernandez", 23);


    /* @brief Crear un objeto del banco llamado Santander.
     * Representa el sistema bancario donde los usuarios podrán operar. */
    Banco Santander;


    /* @brief Crear dos usuarios bancarios con cuentas iniciales.
     * @details
     * Ariana:cuenta 0001 con $5000 de saldo inicial.
     * Ana: cuenta 0002 con $3000 de saldo inicial.*/
    UsuarioBancario Ariana = Santander.nuevoUsuario(CuentaBancaria("Ariana", 0001, 5000.0));
    UsuarioBancario Ana = Santander.nuevoUsuario(CuentaBancaria("Ana", 0002, 3000.0));


    /* * @brief Mostrar los saldos de ambos usuarios antes de realizar operaciones.*/
    std::cout << "\n--- Antes de la transferencia ---" << std::endl;
    std::cout << Ariana.getNombre() << " saldo: $" << Ariana.getCuenta().consultarSaldo() << std::endl;
    std::cout << Ana.getNombre() << " saldo: $" << Ana.getCuenta().consultarSaldo() << std::endl;


    /* @brief Realizar una transferencia de Ana a Ariana.
     * @param monto Cantidad a transferir ($1500)
     * @param noRef Número de referencia de la operación (1709)*/
    std::cout << "\n--- Realizando la transferencia ---" << std::endl;
    Santander.realizarTransferencia(Ana, Ariana, 1500.0, 1709);


    /*@brief Mostrar los saldos después de la transferencia.
     * Esto permite verificar que la operación se haya realizado correctamente.*/
    std::cout << "\n--- Despues de la transferencia ---" << std::endl;
    std::cout << Ariana.getNombre() << " saldo: $" << Ariana.getCuenta().consultarSaldo() << std::endl;
    std::cout << Ana.getNombre() << " saldo: $" << Ana.getCuenta().consultarSaldo() << std::endl;


    /*@brief Realizar una compra con cashback para Ariana.
     * @param descripcion Producto comprado ("Shampoo")
     * @param monto Monto de la compra ($245)
     * @param noRef Número de referencia de la transacción (1809)
     * @details La compra disminuye el saldo pero aplica cashback según la tasa del banco.*/
    std::cout << "\n--- Realizando compra con cashback ---" << std::endl;
    Santander.realizarCompra(Ariana, "Shampoo", 245.0, 1809);


    /* @brief Mostrar el saldo de Ariana después de la compra con cashback.*/
    std::cout << "\n--- Despues de la compra ---" << std::endl;
    std::cout << Ariana.getNombre() << " saldo: $" << Ariana.getCuenta().consultarSaldo() << std::endl;

    //PRODUCTOS//

    Producto shampoo("Shampoo", 1001, Categoria::HIGIENE, "shampoo anti caidas", TipoConsumo::CONSUMIBLE, "21-09-25", "21-09-26", 0.5, 245.0, 500, "KERASTASE PARIS", "ANTICAIDAS");

    Producto Consola("PlayStation 5", 3095, Categoria::ELECTRONICA, "Consola de Videojuegos", TipoConsumo::NO_CONSUMIBLE, "21-09-25", "N/A", 2.2, 12790.0, 0, "Sony", "PS5 EDICION ESTANDAR");

    std::cout << "\nInventario de productos" << std::endl;
    shampoo.mostrarProducto();

    std::cout << "            " << std::endl;
    Consola.mostrarProducto();

    /*@brief Esperar a que el usuario presione Enter antes de cerrar el programa.*/
    std::cin.get();
    return 0;
}
