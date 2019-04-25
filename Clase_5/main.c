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

    //eProducto arrayProductos[TAM];
    //cargarArrayDeProductos(arrayProductos,TAM);
    //mostrarArrayDeProductos(arrayProductos,TAM);

    eProducto array[TAM]={{"a","s","a","w",5},{"b","d","a","w",3},{"c","s","a","w",8}};

    mostrarArrayDeProductos(array,TAM);









    system("pause");
    system("cls");
    return 0;
}
