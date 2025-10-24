#include "Prerequisites.h"
#include "programmingPatterns/Composite/SistemaArchivo.h"
#include "programmingPatterns/Composite/SistemaCarpeta.h"


int main() {

	SistemaArchivo* archivo1 = new SistemaArchivo();
	SistemaArchivo* archivo2 = new SistemaArchivo();
	SistemaCarpeta* carpeta1 = new SistemaCarpeta();

	carpeta1->agregarSistema(archivo1);
	carpeta1->agregarSistema(archivo2);

	carpeta1->mostrarInfo();

	delete carpeta1;

	return 0;
};