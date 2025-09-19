#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBancario.h"

class Banco {
public:
    Banco(double cashback = 0.01) : cashbackRate(cashback) {}
    ~Banco() = default;

    UsuarioBancario nuevoUsuario(CuentaBancaria cuenta) {
        UsuarioBancario usuario(cuenta);
        return usuario;
    }

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
    double cashbackRate;
};
