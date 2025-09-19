#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class UsuarioBancario {
public:
   
    UsuarioBancario(const CuentaBancaria& cuenta)
        : m_cuenta(cuenta),
        m_nombreUsuario(cuenta.getPropietario()), 
        m_uniquePoints(5)
    {
     
    }

    ~UsuarioBancario() = default;

    CuentaBancaria& getCuenta() { return m_cuenta; }
    const CuentaBancaria& getCuenta() const { return m_cuenta; }

    // Getter para el nombre del usuario
    std::string getNombre() const { return m_nombreUsuario; }

private:
    CuentaBancaria m_cuenta;
    std::string m_nombreUsuario;
    std::vector<int> m_historialTransacciones;
    Fecha m_antiguedad;
    double m_cashBack;   // ahora sí double
    int m_uniquePoints;
};