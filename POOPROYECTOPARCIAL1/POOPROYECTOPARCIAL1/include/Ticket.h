/**
 * @file Ticket.h
 * @brief Define la clase Ticket, que representa un elemento o una tarea dentro del sistema.
 *
 * Un Ticket almacena información relevante como un identificador único, un título,
 * la descripción, su estado actual y la fecha de creación.
 *
 * @author Ariana Moreno Jimenez
 * @date 2025-09-30
 */
#pragma once

#include "Prerequisites.h" // Se asume que aquí están definidos 'Estado' y 'Fecha'


 /**
  * @class Ticket
  * @brief Clase fundamental para la gestión de elementos de trabajo o incidentes.
  *
  * Cada instancia de Ticket es inmutable en cuanto a su ID, pero se puede
  * modificar su estado, título y descripción.
  */
class Ticket {

public: 
	
	/**
	 * @brief Constructor de la clase Ticket.
	 *
	 * Inicializa todos los miembros con valores vacíos o predeterminados:
	 * ID, título, descripción = ""
	 * estado = Estado::Pendiente
	 */
	Ticket() : ID(""), titulo(""), descripcion(""), estado(Estado::Pendiente) {
		// Se asume que aquí están definidos 'Estado'

	}

	/**
	 * @brief Constructor parametrizado para crear un Ticket completamente inicializado.
	 *
	 * El ID es generado y asignado por la clase GestorDeTickets. También llama a
	 * 'fecha.getFecha()' para registrar la fecha de creación del sistema.
	 *
	 * @param m_ID El identificador único del ticket (numérico y autogenerado).
	 * @param m_titulo El título descriptivo del ticket.
	 * @param m_descripcion El detalle completo del problema o tarea.
	 * @param m_estado El estado inicial del ticket.
	 */
	Ticket(std::string m_ID, std::string m_titulo, std::string m_descripcion, Estado m_estado)
		: ID(m_ID), titulo(m_titulo), descripcion(m_descripcion), estado(m_estado) {

		
		fecha.getFecha(); // Almacena la fecha de creacion.
	}

	// GETTERS

	/**
	 * @brief Obtiene el ID único del ticket.
	 * @return std::string El identificador del ticket.
	 */
	std::string getID() const { return ID; }

	/**
	 * @brief Obtiene el título del ticket.
	 * @return std::string El título del ticket.
	 */
	std::string getTitulo() const { return titulo; }

	/**
	 * @brief Obtiene la descripción detallada del ticket.
	 * @return std::string La descripción del ticket.
	 */
	std::string getDescripcion() const { return descripcion; }

	/**
	 * @brief Obtiene el estado actual del ticket.
	 * @return Estado El estado del ticket (Pendiente, EnProceso, Completado).
	 */
	Estado getEstado() const { return estado; }
	
	/**
	 * @brief Obtiene la fecha de creación del ticket como una cadena de texto.
	 * @return std::string La fecha de creación en formato DD/MM/AAAA.
	 */
	std::string getFecha() const { return fecha.toString(); }
	
	// SETTERS

	/**
	 * @brief Establece un nuevo título para el ticket.
	 * @param nuevoTitulo El nuevo título a asignar.
	 * @return void
	 */
	void 
	   setTitulo(const std::string& nuevoTitulo) { titulo = nuevoTitulo; }

	/**
	 * @brief Establece una nueva descripción para el ticket.
	 * @param nuevaDescripcion La nueva descripción a asignar.
	 * @return void
	 */
	void 
	   setDescripcion(const std::string& nuevaDescripcion) { descripcion = nuevaDescripcion; }

	/**
	 * @brief Actualiza el estado del ticket.
	 * @param m_estado El nuevo estado (e.g., Estado::Completado).
	 * @return void
	 */
	void 
	   setEstado(Estado m_estado) { estado = m_estado; }


	// UTILIDAD

	/**
	 * @brief Genera una representación legible del Ticket en una cadena de texto.
	 *
	 * Incluye todos los campos: ID, Título, Descripción, Estado (en texto) y Fecha.
	 *
	 * @return std::string La representación completa del ticket formateada.
	 */
	std::string toString() const {
		
		return "ID: " + ID + "\nTitulo: " + titulo + "\nDescripcion: " + descripcion + "\nEstado: " + estadoToString(estado) + "\nFecha: " + fecha.toString() + "\n";
	}

private:
	std::string ID; //< Identificador único del ticket.
	std::string titulo; //< Resumen conciso de la tarea
	std::string descripcion; //< Resumen conciso de la tarea
	Estado estado; //< El estado actual del ticket (usa la enum Estado).

	Fecha fecha; //< Fecha de creación del ticket.

};