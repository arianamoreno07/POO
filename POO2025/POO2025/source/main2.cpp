#include "Prerequisites.h"
#include "programmingPatterns/Decorator/Cafeteria.h"
#include "programmingPatterns/Decorator/Condimento.h"
#include "programmingPatterns/Decorator/Leche.h"
#include "programmingPatterns/Decorator/Azucar.h"



int main() {
	
	Cafeteria* cafeteria = new Cafeteria();
	Leche* cafeConLeche = new Leche(cafeteria);
	Azucar* cafeConAzucar = new Azucar(cafeConLeche);

	cafeteria->prepararCafe();


	delete cafeteria;
	delete cafeConLeche;
	delete cafeConAzucar;

	
    
    return 0;
}