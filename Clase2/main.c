#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int EsUnNumero(char *cadena )
{
    int indice=0;
    int retorno=0;
    //printf("\npalabra por parametros: %s",cadena);
    while(cadena[indice]!='\0')
    {
        if(cadena[indice]<'0' || cadena[indice] > '9')
        {
            break;
        }
        else
        {
            indice++;
        }
    }
    if(cadena[indice]<'0' || cadena[indice] > '9')
    {
        retorno=1;
    }



    return retorno;
}

int main()
{


    char letra;
    char palabra[10];
    int numero;
    int es;
    scanf("%s",&palabra);
    fflush(stdin);
    printf("Palabra ingresada %s",palabra);
    //scanf("%d",&numero);
    //fflush(stdin);
    //printf("%d",numero);





    es=EsUnNumero(palabra),{
        if(es==1)
        {
        printf("Es correcto.");
        }
        esle
        {
        printf("No lo es.");
        }
    }


    /*





    scanf("%d",&letra);
    fflush(stdin);
    printf("\nLetra: %d",letra);
    scanf("%c",&letra);
    fflush(stdin);
    printf("\nLetra: %c",letra);
    */
    /*
    scanf("%s",&palabra);
    fflush(stdin);
    printf("\nPalabra: %s",palabra);
    int indice=0;
    while(indice<20)
    {
        if(palabra[indice]=='\0')
        {
            printf("El barra cero esta en: %d",palabra[indice]);
        }
            printf("\nLetra: %c",palabra[indice]);
            indice++;
    }
    */
/*
int miDato=333;
int cambiarValor(miDato);
printf("Mi dato es: %d",miDato);
cambiarValorReferencia(&miDato);
printf("Mi dato es: %d",miDato);
return 1;
*/
//saludar();
    /*
    int edad;
    int retorno;
    do
    {
        printf("Ingrese una edad: ");

        retorno=scanf("%d",&edad);
        fflush(stdin);
    }
    while(retorno==0);

    printf("La respuesta es: %d\n",retorno);
    printf("La edad es: %d\n",edad);
    */
    /*
    int dato;
    dato=dividir(6);
    printf("El dato es: %d\n",dato);
    dato=dividir(0);
    printf("El dato es: %d\n",dato);

    int unFactorial;
    unFactorial= factorial(5);
    printf("El factorial es : %d",unFactorial);

*/



    return 0;
}
