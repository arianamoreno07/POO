#pragma once
#include "Prerequisites.h"

class CuentaBancaria {

public: 
	CuentaBancaria(std::string propietario, int numCuenta, double saldoInicial) :
		m_propietario(propietario), m_numeroCuenta(numCuenta), m_saldo(saldoInicial) {
	}
	~CuentaBancaria() = default;

	void 
		consultarSaldo() {
		std::cout << "Saldo actual de " << m_propietario
			<< "(Cuenta " << m_numeroCuenta << "): " << m_saldo << std::endl;
	}

	void 
		mostrarInteresCalculado() {
		double tasaInteres = 5.0; 
		double interes = calcularInteres(tasaInteres);
		std::cout << "Interes calculado al " << tasaInteres << "% sobre el saldo de "
			<< m_saldo << "es: " << interes << std::endl; 
	}

private: 
	double 
		calcularInteres(double tasaInteres) {
		return m_saldo * tasaInteres / 100.0;
	}
public:
	std:: string m_propietario;
protected: 
	int m_numeroCuenta;
private: 
	double m_saldo;

};