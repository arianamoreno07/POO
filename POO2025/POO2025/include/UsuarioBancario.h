#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"


/*@class UsuarioBancario
 * @brief Representa a un usuario de un banco con su cuenta y datos relacionados.
 * Esta clase almacena la información de un usuario bancario, incluyendo su cuenta,
 * nombre, historial de transacciones, antigüedad, cashback y puntos únicos.*/
class UsuarioBancario {
public:


   /* @brief Constructor de UsuarioBancario.
     * @param cuenta Objeto CuentaBancaria que será asignado al usuario.
     * Inicializa el nombre del usuario a partir del propietario de la cuenta y asigna
     * 5 puntos únicos por defecto.*/
    UsuarioBancario(const CuentaBancaria& cuenta)
        : m_cuenta(cuenta),
        m_nombreUsuario(cuenta.getPropietario()), 
        m_uniquePoints(5)
    {
     
    }
    /* @brief Destructor por defecto.*/
    ~UsuarioBancario() = default;


    /*@brief Obtiene una referencia a la cuenta del usuario.
     *@return Referencia a la CuentaBancaria del usuario.*/
    CuentaBancaria& getCuenta() { return m_cuenta; }

    /*@brief Obtiene una referencia constante a la cuenta del usuario.
     *@return Referencia constante a la CuentaBancaria del usuario.*/
    const CuentaBancaria& getCuenta() const { return m_cuenta; }

    /**/
    std::string getNombre() const { return m_nombreUsuario; }

private:
    CuentaBancaria m_cuenta;
    std::string m_nombreUsuario;
    std::vector<int> m_historialTransacciones;
    Fecha m_antiguedad;
    double m_cashBack;   // ahora sí double
    int m_uniquePoints;
};