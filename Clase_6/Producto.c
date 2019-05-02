#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

void hardcodearProductos(eProducto lista[], int tam)
{
    //Utiliza la funcion: inicializarProductos();
    int id[3]={1,2,3};
    int i;
    for(i=0;i<tam;i++)
    {
        //inicializarProductos();
    }
}

void inicializarProveedor(eProveedor lista[], int tam)
{
    int id[3]={1,2,3};
    char descripcion[3][50]={"aa","bb","cc"};
    char localidad[3][50]={"Avellaneda","Bahia Blanca","Rio Negro"};
    char duenio[3][50]={"IPF","Axion","Shell"};
    char cuit[3][50]={"444","555","666"};
    int i;
    for(i=0;i<tam;i++)
    {
        strcpy(lista[i].descripcion,descripcion);
        strcpy(lista[i].localidad,localidad);
        strcpy(lista[i].duenio,duenio);
        strcpy(lista[i].cuit,cuit);
        lista[i].id=id;
        lista[i].estado=OCUPADO;
    }
}

void inicializarProductos(eProducto lista[], int tam)
{
    float precio[10]={35,36,37,38};
    int idProveedor[10]={1,2,3,1,2,3,1,2,3,1};
    char fechaDeVencimiento[10][50]={"1/2/2020","1/3/2020","1/4/2020"};
    char codigoDeBarra[10][13]={"1003","1005","1007"};
    char marca[10][50]={"Infinia","ActionPower","Be Power","Infinia Diesel","Action Diesel","Be Power Diesel","Super","Action Super","Normal","Kerosene"};
    int i;
    for(i=0;i<tam;i++)
    {
        strcpy(lista[i].fechaDeVencimiento,fechaDeVencimiento);
        strcpy(lista[i].codigoDeBarra,codigoDeBarra);
        strcpy(lista[i].marca,marca);
        //lista[i].precio=precio;
        lista[i].idProveedor=idProveedor;
        lista[i].estado=OCUPADO;
    }
}

void mostrarProducto(eProducto unProducto);
{
    printf("%f--%d--%s--%s--%s\n",unProducto.precio,unProducto.idProveedor,unProducto.fechaDeVencimiento,unProducto.codigoDeBarra,unProducto.marca);
}

void cargarArray(eProducto lista[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        lista[i]=mostrarProducto();
    }
}

void mostrarArrayProductosConProveedor(eProducto listaProductos[], int tamProducto, eProveedor listaProveedores[], int tamProveedor)
{
    int i;
    int j;
    for(i=0;i<tamProducto;i++)
    {
        mostrarProducto(listaProductos[i]);
        for(j=0;j<tamProveedor;j++)
        {
            //Esto se llama producto cartesiano
            if(listaProductos[j].idProveedor==listaProveedores.id)
            {
                mostrarProducto(listaProveedores[j]); //Utilizar la funcion: mostrarProveedor(listaProveedores[i]);
            }
        }
    }
}

void mostrarArrayProveedorConSusProductos(eProveedor listaProveedores[], int tamProveedor, eProducto listaProductos, int tamProducto)
{
    int i;
    int j;
    for(i=0;i<tamProveedor;i++)
    {
        mostrarProducto(listaProveedores[i]); //Utilizar la funcion: mostrarProveedor(listaProveedores[i]);
        for(j=0;j<tamProducto;j++)
        {
            if(listaProveedores[j].id==listaProductos.idProveedor)
            {
                mostrarProducto(listaProductos[j]);
            }
        }
    }
}
