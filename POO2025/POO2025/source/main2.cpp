#include "Prerequisites.h"
#include "programmingPatterns/Prototype/DocumentoTexto.h"
#include "programmingPatterns/Prototype/DocumentoImagen.h"


int main() {
    // Crear prototipos
    DocumentoTexto docTexto;
    docTexto.configurar("Documento original");

    DocumentoImagen docImagen;
    docImagen.configurar("Documento original");

    // Clonar los documentos
    DocumentoPrototype* clonTexto = docTexto.clonar();
    DocumentoPrototype* clonImagen = docImagen.clonar();

    // Modificar clones
    clonTexto->configurar("Documento de texto CLONADO");
    clonImagen->configurar("Documento de imagen CLONADO");

    // Mostrar resultados
    std::cout << "\n--- Documentos originales ---\n";
    docTexto.mostrar();
    docImagen.mostrar();

    std::cout << "\n--- Documentos clonados ---\n";
    clonTexto->mostrar();
    clonImagen->mostrar();

    // Liberar memoria
    delete clonTexto;
    delete clonImagen;

    return 0;
}