#pragma once
#include "Prerequisites.h"


class Item {
public:
    Item(const std::string& name, int quantity)
        : m_name(name), m_quantity(quantity) {
    }

    // Getters
    std::string getName() const {
        return m_name;
    }

    int getQuantity() const {
        return m_quantity;
    }

    // Modificar cantidad
    void add(int quantity) {
        m_quantity += quantity;
    }

    void remove(int quantity) {
        m_quantity -= quantity;
        if (m_quantity < 0) {
            m_quantity = 0; // evitar negativos
        }
    }

    // Comparación para usar en std::remove
    bool operator==(const Item& other) const {
        return m_name == other.m_name;
    }

private:
    std::string m_name;
    int m_quantity;
};
