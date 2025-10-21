#include "Prerequisites.h"
#include "programmingPatterns/Decorator/ComponenteConcreto.h"
#include "programmingPatterns/Decorator/DecoratorConcretoA.h"
#include "programmingPatterns/Decorator/DecoratorConcretoB.h"
#include "Prerequisites.h"



int main() {
	ComponenteConcreto* objeto = new ComponenteConcreto();
	DecoratorConcretoA* decoradorA = new DecoratorConcretoA(objeto);
	DecoratorConcretoB* decoradorB = new DecoratorConcretoB(decoradorA);

	objeto->operacion();
	decoradorA->operacion();
	decoradorB->operacion();

	delete decoradorB;
	delete decoradorA;
	delete objeto;
	
    
    return 0;
}