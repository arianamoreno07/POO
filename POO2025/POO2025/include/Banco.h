#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBancario.h"

/* @class Banco
 * @brief Representa un banco que maneja usuarios, cuentas y operaciones financieras.
 * Esta clase permite crear nuevos usuarios, realizar transferencias entre cuentas,
 * aplicar compras y calcular cashback según el tipo de comercio o la tasa del banco.*/

class Banco {
public:

    /* @brief Constructor de la clase Banco.
     * @param cashback Tasa de cashback por defecto aplicada a las compras (1% por defecto).*/
    Banco(double cashback = 0.01) : cashbackRate(cashback) {}

    // * @brief Destructor de la clase Banco.
    ~Banco() = default;


    /* @brief Crea un nuevo usuario bancario con una cuenta existente.
     * @param cuenta Objeto CuentaBancaria que se asignará al usuario.
     * @return UsuarioBancario creado con la cuenta proporcionada.*/
    UsuarioBancario nuevoUsuario(CuentaBancaria cuenta) {
        UsuarioBancario usuario(cuenta);
        return usuario;
    }


    /* @brief Calcula el cashback según el tipo de comercio y monto.
     * @param comercio Tipo de comercio (TRADE) donde se realiza la compra.
     * @param _monto Monto de la compra.
     * @return Cantidad de dinero devuelta como cashback.*/
    double cashback(TRADE comercio, double _monto) {

        double retorno = 0.0;
        switch (comercio) {
        case TELECOMUNICACIONES: 
            retorno = _monto * 0.01; // 1% de cashback
            break;
        case RESTAURANTES:
            retorno = _monto * 0.02; // 2% de cashback
            break;
        case FARMACIAS:
            retorno = _monto * 0.03; // 3% de cashback
            break;
        case SUPERMERCADOS: 
            retorno = _monto * 0.01; // 1% de cashback
            break;
        default:
            retorno = 0.0;
            break;
        }
        return retorno;
    }

    /*@brief Realiza una transferencia de dinero entre dos usuarios.
    * @param cuentaOrigen Usuario que envía el dinero.
    * @param cuentaDestino Usuario que recibe el dinero.
    * @param monto Cantidad a transferir.
    * @param noRef Número de referencia de la transacción.*/
    void realizarTransferencia(UsuarioBancario& cuentaOrigen,
        UsuarioBancario& cuentaDestino,
        double monto,
        int noRef) {
        if (monto > 0 && monto <= cuentaOrigen.getCuenta().consultarSaldo()) {
            cuentaOrigen.getCuenta().retirar(monto);
            cuentaDestino.getCuenta().depositar(monto);

            std::cout << "Transferencia de " << monto << " de la cuenta "
                << cuentaOrigen.getCuenta().getNumeroCuenta() << " a la cuenta "
                << cuentaDestino.getCuenta().getNumeroCuenta()
                << " realizada con exito. Numero de Referencia: " << noRef << std::endl;
        }
        else {
            std::cout << "Error en la transferencia: monto invalido o saldo insuficiente." << std::endl;
        }
    }


    /* @brief Realiza una compra para un usuario y aplica cashback.
     * @param usuario Usuario que realiza la compra.
     * @param descripcion Concepto o descripción de la compra.
     * @param monto Monto de la compra.
     * @param noRef Número de referencia de la transacción.*/
    void realizarCompra(UsuarioBancario& usuario,
        const std::string& descripcion,
        double monto,
        int noRef) {
        if (usuario.getCuenta().retirar(monto)) {
            // Calcular cashback según la tasa del banco
            double cashback = monto * cashbackRate;
            usuario.getCuenta().depositar(cashback);

            std::cout << "Compra realizada por " << usuario.getNombre()
                << " (Cuenta " << usuario.getCuenta().getNumeroCuenta() << ")\n"
                << "Concepto: " << descripcion
                << " | Monto: $" << monto
                << " | Numero de Referencia: " << noRef
                << "\nCashback aplicado: $" << cashback
                << " | Saldo actual: $" << usuario.getCuenta().consultarSaldo()
                << std::endl;
        }
        else {
            std::cout << "Error en la compra: monto invalido o saldo insuficiente."
                << std::endl;
        }
    }

private:
    double cashbackRate;  // Tasa de cashback aplicada a las compras del banco.
};
