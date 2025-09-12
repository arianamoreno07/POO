#pragma once
#include "Prerequisites.h"

class CuentaBancaria {

public:
	std:: string propietario;

	CuentaBancaria(std::string propietario, int m_numerodeCuenta, double saldoInicial) {

		this->propietario = propietario;
		this->m_numerodeCuenta = m_numerodeCuenta;
		this->m_saldo = saldoInicial;
	}

	void consultarSaldo() {
		std::cout << "El saldo de " << propietario << "es: $" << m_saldo << std::endl;
		std::cout << "Interes calcular: $" << calcularInteres() << std::endl;
	}


protected:
	int m_numerodeCuenta;
	void transaccionInterna(double monto) {
		m_saldo += monto;
		std::cout << "Transaccion realizada, Nuevo saldo: " << m_saldo << std::endl;
	}

private: 
	double m_saldo;
	double calcularInteres() {
		return m_saldo * 0.05;
	}


};