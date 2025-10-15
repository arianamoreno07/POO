#pragma once
#include "Prerequisites.h"

class 
Pizza {
    public:
        std::string masa;
        std::string salsa;
        std::string queso;
        std::vector<std::string> ingredientes;

        void mostrarPizza();
    };