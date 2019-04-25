#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"

eProducto pedirProducto()
{
    eProducto unProducto;

        printf("Ingrese la marca: ");
        gets(unProducto.marca);
        fflush(stdin);

        printf("Ingrese el codigo de barra: ");
        gets(unProducto.codigoDeBarra);
        fflush(stdin);

        printf("Ingrese la fecha de vencimiento: ");
        gets(unProducto.fechaDeVencimiento);
        fflush(stdin);

        printf("Ingrese el proveedor: ");
        gets(unProducto.proveedor);
        fflush(stdin);

        printf("Ingrese el precio: ");
        scanf("%f",&unProducto.precio);
        fflush(stdin);




    return unProducto;
}

void mostrarProducto(eProducto unProducto)
{
    printf("Marca: %s-- Codigo de barra: %s-- Fecha de vencimiento: %s-- Proveedor: %s-- Precio: %f\n",unProducto.marca,unProducto.codigoDeBarra,unProducto.fechaDeVencimiento,unProducto.proveedor,unProducto.precio);
    /*
    printf("Marca: %s\n",unProducto.marca);
    printf("Codigo de barra: %s\n",unProducto.codigoDeBarra);
    printf("Fecha de vencimiento: %s\n",unProducto.fechaDeVencimiento);
    printf("Proveedor: %s\n",unProducto.proveedor);
    printf("Precio: %f\n",unProducto.precio);
    */
}

void cargarArrayDeProductos(eProducto variosProductos[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        variosProductos[i]=pedirProducto();
    }
}

void mostrarArrayDeProductos(eProducto arrayProductos[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarProducto(arrayProductos[i]);
    }
}
