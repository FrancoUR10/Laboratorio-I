#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"
#define TAM 3


int main()
{
    eProducto arrayProductos[TAM];

    inicializarProductos(arrayProductos,TAM);
    cargarArray(arrayProductos,TAM);








    system("pause");
    system("cls");
    return 0;
}
