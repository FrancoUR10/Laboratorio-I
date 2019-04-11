#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int getStringPalabras(char mensaje[], char imput[])
{
    char aux[50];
    int retorno;
    int i;
    for(i=0;i<4;i++)
    {
        printf(mensaje);
        scanf("%s",aux[i]);
        if(aux[i] != ' ')
        {
            retorno=0;
        }
        else
        {
            if(aux[i] < 'a' && aux[i] > 'z')
            {
                retorno=0;
            }
            else
            {
                if(aux[i] < 'A' && aux[i] > 'Z')
                {
                    retorno=0;
                }
            }
        }
        if(aux[i] == ' ')
        {
            imput[i]=aux[i];
            retorno=1;
        }
    }
    return retorno;
}

int getStringNumeros(char mensaje[], int imput[])
{
    int aux[50];
    int retorno;
    int i;
    for(i=0;i<4;i++)
    {
        printf(mensaje);
        scanf("%d",aux[i]);
        if(imput[i]==1)
        {
            imput[i]=aux[i];
            retorno=1;
        }
        else
        {
            retorno=0;
        }
    }
    return retorno;
}
