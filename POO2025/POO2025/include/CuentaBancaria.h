#pragma once
#include "Prerequisites.h"

class CuentaBancaria {
public:
    CuentaBancaria() = default;

    CuentaBancaria(std::string propietario, int numCuenta, double saldoInicial)
        : m_propietario(propietario), m_numeroCuenta(numCuenta), m_saldo(saldoInicial) {
    }

    ~CuentaBancaria() = default;

    // Getter del propietario
    std::string getPropietario() const {
        return m_propietario;
    }

    // Getter del número de cuenta
    int getNumeroCuenta() const {
        return m_numeroCuenta;
    }

    // Getter del saldo (solo lectura)
    double consultarSaldo() const {
        return m_saldo;
    }

    // Mostrar saldo en consola
    void mostrarSaldo() const {
        std::cout << "Saldo actual de " << m_propietario
            << " (Cuenta " << m_numeroCuenta << "): " << m_saldo << std::endl;
    }

    // Métodos para modificar saldo
    void depositar(double monto) {
        if (monto > 0) {
            m_saldo += monto;
        }
    }

    bool retirar(double monto) {
        if (monto > 0 && monto <= m_saldo) {
            m_saldo -= monto;
            return true;
        }
        return false;
    }

    // Mostrar interés calculado
    void mostrarInteresCalculado() const {
        double tasaInteres = 5.0; // Tasa de interés del 5%
        double interes = calcularInteres(tasaInteres);
        std::cout << "Interés calculado al " << tasaInteres << "% sobre el saldo de "
            << m_saldo << " es: " << interes << std::endl;
    }

private:
    double calcularInteres(double tasaInteres) const {
        return m_saldo * tasaInteres / 100.0;
    }

private:
    std::string m_propietario;
    int m_numeroCuenta;
    double m_saldo;
};
