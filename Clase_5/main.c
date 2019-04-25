#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"
#define TAM 3


int main()
{
    //eProducto unProducto;
    //unProducto=pedirProducto();
    //mostrarProducto(unProducto);

    eProducto arrayProductos[TAM];
    cargarArrayDeProductos(arrayProductos,TAM);
    mostrarArrayDeProductos(arrayProductos,TAM);










    return 0;
}
