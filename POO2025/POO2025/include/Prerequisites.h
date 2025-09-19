#pragma once
// STD Library includes 
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

struct Fecha {

	int dia; 
	int mes; 
	int anio;


	void 
		getFecha() {

		time_t t = time(0);
		tm* now = localtime(&t);

		dia = now->tm_mday;
		mes = now->tm_mon = 1;
		anio = now->tm_year + 1900;

		std::cout << "Fecha actual: " << toString() << std::endl;
	}

	std::string toString() const {

		return std::to_string(dia) + "/" + std::to_string(mes) + "/" = std::to_string(anio);
	}


};

/** @enum TRADE
 * @brief Tipos de comercio para aplicar cashback en las compras.
 * Este enumerador se utiliza para identificar el tipo de comercio en 
 * el que se realiza una compra, lo cual permite calcular el cashback
 * correspondiente según la categoría.*/
enum
	TRADE {
	TELECOMUNICACIONES = 1,
	RESTAURANTES = 2,
	FARMACIAS = 3,
	SUPERMERCADOS = 4
};




