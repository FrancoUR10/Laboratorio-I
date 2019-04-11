#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define CANTIDAD_ALUMNOS 4
//Arrays Paralelos
//Elemento, atributos del elemento, Conjuntos.


int main()
{
    char nombre[CANTIDAD_ALUMNOS][50]={"Pablo","Alicia","Lucas","Juan"};
    char apellido[CANTIDAD_ALUMNOS][50]={"Rosenberg","Beltran","Salgado","Ignacio"};
    int edad[CANTIDAD_ALUMNOS]={20,25,40,22};
    int nota[CANTIDAD_ALUMNOS]={2,4,6,8};
    int i;
    for(i=0;i<CANTIDAD_ALUMNOS;i++)
    {
        /*
        if(CANTIDAD_ALUMNOS != -1)
        {
            printf("\nNombre: %s Apellido: %s Edad: %d Nota: %d\n",nombre[i],apellido[i],edad[i],nota[i]);
        }
        */
        if(CANTIDAD_ALUMNOS != 1)
        {
            getStringPalabras("Ingrese una palabra: \n",nombre[i]);
        }
        else
        {
            printf("No se puede ingresar numeros");
        }
    }








    return 0;
}
