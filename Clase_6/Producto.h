#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    int id;
    char marca[50];
    char codigoDeBarra[13];
    char proveedor[50];
    char fechaDeVencimiento[50];
    float precio;
    int estado;
    int idProveedor;
} eProducto;

typedef struct
{
    int id;
    char descripcion[50];
    char localidad[50];
    char cuit[50];
    char duenio[50];
    int estado;
} eProveedor;

void hardcodearProductos(eProducto lista[], int tam);
void inicializarProveedor(eProveedor lista[], int tam);
void inicializarProductos(eProducto lista[], int tam);
eProducto mostrarProducto(void);
void cargarArray(eProducto lista[], int tam);

#endif // PRODUCTO_H_INCLUDED
