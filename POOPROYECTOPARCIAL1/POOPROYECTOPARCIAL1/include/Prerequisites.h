/**
 * @file Prerequisites.h
 * @brief Contiene las definiciones para la estructura Fecha y la enumeración Estado,
 * utilizadas para la gestión de tareas o eventos.
 *
 * Este archivo proporciona herramientas básicas para manejar fechas del sistema
 * y clasificar el estado de un elemento.
 *
 * @author Ariana Moreno Jimenez
 * @date 2025-09-30
 */
#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

 // ESTRUCTURAS

 /**
  * @struct Fecha
  * @brief Estructura para almacenar y gestionar una fecha (día, mes, año).
  */
struct Fecha {

		int dia;
		int mes;
		int anio;

		/**
		 * @brief Obtiene la fecha actual del sistema y la asigna a los miembros de la estructura.
		 *
		 * Internamente usa las funciones de tiempo de la biblioteca estándar de C (`time`, `localtime`).
		 *
		 * @note Esta función también imprime la fecha obtenida en la consola (`std::cout`).
		 * @return void
		 */
		void
			getFecha() {

			time_t t = time(0);
			tm* now = localtime(&t);

			dia = now->tm_mday;
		
			mes = now->tm_mon + 1;
			anio = now->tm_year + 1900;

		
			std::cout << "Fecha actual: " << toString() << std::endl;
		}

		/**
		 * @brief Convierte la fecha almacenada en un string con formato "DD/MM/AAAA".
		 *
		 * @return std::string La fecha formateada como una cadena de texto.
		 */
		std::string toString() const {
			
			return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio);
		}


	};

// ENUMERACIONES

/**
 * @enum Estado
 * @brief Representa los posibles estados de una tarea, elemento o proceso.
 */
enum class Estado {
Pendiente,
EnProceso,
Completado
};

/**
 * @brief Convierte un valor de la enumeración 'Estado' a su representación en cadena de texto.
 *
 * @param estado El valor 'Estado' a convertir.
 * @return std::string La cadena de texto correspondiente al estado (ej. "Pendiente").
 */
inline std::string estadoToString(Estado estado) {
		switch (estado) {
		case Estado::Pendiente: return "Pendiente";
		case Estado::EnProceso: return "En Proceso";
		case Estado::Completado: return "Completado";
		default: return "Desconocido";
		} 
	}


