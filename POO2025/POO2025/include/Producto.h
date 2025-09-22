#pragma once
#include "Prerequisites.h"

class Producto {

public:

	Producto(std::string nombre, int codigo, Categoria categoria, std::string descripcion, TipoConsumo tipoconsumo,
		std::string fechaEmpaquetado, std::string fechaCaducidad, double peso, double costo, double contenido,
		std::string marca, std::string modelo) : m_nombre(nombre), m_codigo(codigo), m_categoria(categoria),
		m_descripcion(descripcion), m_tipoConsumo(tipoconsumo), m_fechaEmpaquetado(fechaEmpaquetado),
		m_fechaCaducidad(fechaCaducidad), m_peso(peso), m_costo(costo), m_contenido(contenido), m_marca(marca), m_modelo(modelo) {
	}

	~Producto() = default;

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

	std::string categoriaToString(Categoria cat) const {

		switch (cat) {

		case Categoria::ALIMENTO: return "Alimento";
		case Categoria::ELECTRONICA: return "Electronica";
		case Categoria::HIGIENE: return "Higiene";
		case Categoria::ROPA: return "Ropa";
		default: return "otro";

		}
	}

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