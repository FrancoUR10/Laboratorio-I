#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char marca[50];
    char codigoDeBarra[13];
    char fechaDeVencimiento[50];
    char proveedor[50];
    float precio;
    int estado;
} eProducto;

eProducto pedirProducto(void);
void mostrarProducto(eProducto unProducto);
void cargarArrayDeProductos(eProducto variosProductos[], int tam);
void mostrarArrayDeProductos(eProducto arrayProductos[], int tam);
void construirArray(eProducto arrayProductos[], int tam);
int insertProducto(eProducto, eProducto[]);
int dameLugarLibre(eProducto[]);
int existeProducto(eProducto, eProducto[]);
int borrarProducto(eProducto, eProducto[]);
int editarProducto(eProducto, eProducto[]);

#endif // PRODUCTO_H_INCLUDED
