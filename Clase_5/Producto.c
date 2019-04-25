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

        system("cls");




    return unProducto;
}

void mostrarProducto(eProducto unProducto)
{
    //printf("Marca: %s-- Codigo de barra: %s-- Fecha de vencimiento: %s-- Proveedor: %s-- Precio: %f\n",unProducto.marca,unProducto.codigoDeBarra,unProducto.fechaDeVencimiento,unProducto.proveedor,unProducto.precio);

    printf("\nMarca: %s\n",unProducto.marca);
    printf("Codigo de barra: %s\n",unProducto.codigoDeBarra);
    printf("Fecha de vencimiento: %s\n",unProducto.fechaDeVencimiento);
    printf("Proveedor: %s\n",unProducto.proveedor);
    printf("Precio: %f\n\n",unProducto.precio);

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

int insertProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=dameLugarLibre(listado);
    if(indice!=-1)
    {
        listado[indice]=elProducto;
    }
    return indice;
}

int borrarProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=existeProducto(elProducto,listado);
    if(indice!=-1)
    {
        listado[indice].estado=-1;
    }
    return indice;
}

void construirArray(eProducto arrayProductos[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        arrayProductos[i].estado=0;
        strcpy(arrayProductos[i].marca,"");
        strcpy(arrayProductos[i].codigoDeBarra,"");
        strcpy(arrayProductos[i].fechaDeVencimiento,"");
        strcpy(arrayProductos[i].proveedor,"");
        arrayProductos[i].precio=0;
    }
}

int dameLugarLibre(eProducto listado[])
{
    int indice=0;
    if(listado.estado != -1)
    {
        indice=-1;
    }
    return indice;
}
