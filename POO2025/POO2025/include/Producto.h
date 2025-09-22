#pragma once
#include "Prerequisites.h"

/**
 * @class Producto
 * @brief Representa un producto dentro del inventario o sistema de ventas.
 * @details Contiene atributos como nombre, código, categoría, descripción,
 * fecha de empaquetado, caducidad, peso, costo, contenido, marca y modelo.
 */
class Producto {

public:
	/**
	 * @brief Constructor principal del producto.
	 * @param nombre Nombre del producto.
	 * @param codigo Código único del producto.
	 * @param categoria Categoría del producto (enum Categoria).
	 * @param descripcion Breve descripción del producto.
	 * @param tipoConsumo Si es consumible o no consumible (enum TipoConsumo).
	 * @param fechaEmpaquetado Fecha de empaquetado del producto.
	 * @param caducidad Fecha de caducidad del producto (si aplica).
	 * @param peso Peso del producto en kg.
	 * @param costo Costo del producto en moneda local.
	 * @param contenido Cantidad o contenido en ml o gr.
	 * @param marca Marca del producto.
	 * @param modelo Modelo del producto.
	 */
	Producto(std::string nombre, int codigo, Categoria categoria, std::string descripcion, TipoConsumo tipoconsumo,
		std::string fechaEmpaquetado, std::string fechaCaducidad, double peso, double costo, double contenido,
		std::string marca, std::string modelo) : m_nombre(nombre), m_codigo(codigo), m_categoria(categoria),
		m_descripcion(descripcion), m_tipoConsumo(tipoconsumo), m_fechaEmpaquetado(fechaEmpaquetado),
		m_fechaCaducidad(fechaCaducidad), m_peso(peso), m_costo(costo), m_contenido(contenido), m_marca(marca), m_modelo(modelo) {
	}

	~Producto() = default;

	// GETTERS
	std::string getNombre() const { return m_nombre; }
	int getCodigo() const { return m_codigo; }
	Categoria getCategoria() const { return m_categoria; }
	std::string getDescripcion() const { return m_descripcion; }
	TipoConsumo getTipoConsumo() const { return m_tipoConsumo; }
	std::string getFechaEmpaquetado() const { return m_fechaEmpaquetado; }
	std::string getFechaCaducidad() const { return m_fechaCaducidad; }
	double getPeso() const { return m_peso; }
	double getCosto() const { return m_costo; }
	double getContenido() const { return m_contenido; }
	std::string getMarca() const { return m_marca; }
	std::string getmodelo() const { return m_modelo; }


	void setNombre(const std::string& nombre) { m_nombre = nombre; }
	void setCodigo(int codigo) { m_codigo = codigo; }
	void setCategoria(Categoria categoria) { m_categoria = categoria; }
	void setDescripcion(const std::string& descripcion) { m_descripcion = descripcion; }
	void setTipoConsumo(TipoConsumo tipo) { m_tipoConsumo = tipo; }
	void setFechaEmpaquetado(const std::string& fecha) { m_fechaEmpaquetado = fecha; }
	void setFechaCaducidad(const std::string& fecha) { m_fechaCaducidad = fecha; }
	void setPeso(double peso) { m_peso = peso; }
	void setCosto(double costo) { m_costo = costo; }
	void setContenido(double contenido) { m_contenido = contenido; }
	void setMarca(const std::string& marca) { m_marca = marca; }
	void setModelo(const std::string& modelo) { m_modelo = modelo; }

	// MÉTODOS 
   /**
	* @brief Muestra en consola toda la información del producto.
	*/
	void mostrarProducto() const {

		std::cout << " Producto: " << m_nombre
			<< "\nCodigo: " << m_codigo
			<< "\nCategoria: " << categoriaToString(m_categoria)
			<< "\nDescripcion: " << m_descripcion
			<< "\nTipo: " << tipoConsumoToString(m_tipoConsumo)
			<< "\nFecha de Empaquetado: " << m_fechaEmpaquetado
			<< "\nFecha de Caducidad: " << m_fechaCaducidad
			<< "\nPeso: " << m_peso
			<< "\nCosto: " << m_costo
			<< "\nContenido: " << m_contenido
			<< "\nMarca: " << m_marca
			<< "\nModelo: " << m_modelo << std::endl;

	}

private:

	/**
	 * @brief Convierte el enum Categoria a string para mostrar.
	 * @return Nombre de la categoría.
	 */
	std::string categoriaToString(Categoria cat) const {

		switch (cat) {

		case Categoria::ALIMENTO: return "Alimento";
		case Categoria::ELECTRONICA: return "Electronica";
		case Categoria::HIGIENE: return "Higiene";
		case Categoria::ROPA: return "Ropa";
		default: return "otro";

		}
	}

	/**
	* @brief Convierte el enum TipoConsumo a string para mostrar.
	* @return "Consumible" o "No consumible".
	*/
	std::string tipoConsumoToString(TipoConsumo tipo) const {
		return (tipo == TipoConsumo::CONSUMIBLE) ? "Consumible" : "No consumible";
	}


private:

	std::string m_nombre;
	int m_codigo;
	Categoria m_categoria;
	std::string m_descripcion;
	TipoConsumo m_tipoConsumo;
	std::string m_fechaEmpaquetado;
	std::string m_fechaCaducidad;
	double m_peso;
	double m_costo;
	double m_contenido;
	std::string m_marca;
	std::string m_modelo;

};