#include "Prerequisites.h"
#include "programmingPatterns\Builder\Builder.h"
#include "programmingPatterns\Builder\Director.h"
#include "programmingPatterns\Builder\BuilderConcreto.h"

int main() {

	Builder* builder = new BuilderConcreto();
	Director* director = new Director(builder);
	director->construct();
	Producto* producto = builder->getProducto();
	producto->show();

	delete producto;
	delete director;
	delete builder;

		return 0;

}

