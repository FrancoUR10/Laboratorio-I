#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarVector(int datos[],int tamanio);
void mostrarPalabras(char palabras[][10],int tamanio);
void cargarVector(int datos[],int tamanio);
void ordenarVector(int datos[],int tamanio); //Hacer esta funcion, es igual a palabras pero cambiando palabra por ordenar.
// Ver algoritmos de ordenamientos.
// El compilador multiplica desde esa posision que se le asigno.
// gets(usuario[i]); //Permite ingresar char o string sin error al llenar el buffer o agregar un \0 al final.
int main()
{
    char usuario[][10]={"Jose","Maria","Jesus","Melchor","Gaspar"}; //Se toma como un solo dato. //Pregunta de parcial, que indica el primer array y el segundo de esta variable.
    int nota[10]={8,5,2,10,3}; //Se toma como varios datos.
    int i;
    int j;

    mostrarVector(nota,5);
    cargarVector(nota,5);
    mostrarVector(nota,5);
    for(i=0;i<5;i++)
    {
        printf("Hello %s \n Nota: %d\n         ",usuario[i],nota[i]);
    }


    //Se puede hacer en una sola funcion, para sacar el mayor y menor array en fila.
    // Ordenamiento por nota
    /*
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d => %d \n           ",nota[i],nota[j]);
            if(nota[i]<nota[j])
            {
                int aux=nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j],auxString);

            }
        }
    }
    */
    // Ejemplos de comparacion de ASCII

    for(i=0;i<5;i++)
    {
        printf("Hello %s \n Nota: %d\n         ",usuario[i],nota[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d => %d \n           ",nota[i],nota[j]);
            // mal if(usuario[i]<usuario[j])
            int resultado;
            resultado=strcmp("hola","hola"); //0
            printf("\n iguales :%d",resultado);
            resultado=strcmp("Hola","hola"); //-1
            printf("\n primera :%d",resultado);
            resultado=strcmp("hola","Hola"); //1
            printf("\n segunda :%d",resultado);
            resultado=strcmp("A","a"); //-1
            printf("\n la A :%d",resultado);
            resultado=strcmp("a","b"); //-1
            printf("\n a-b :%d",resultado);
            resultado=strcmp("b","a"); //1
            printf("\n b-a :%d",resultado);


            //Los ejemplos.



            // if(strcmp(usuario[i],usuario[j])==-1) //Es la simplificacion.
            resultado= strcmp(usuario[i],usuario[j]);
            if(resultado==1)
            {
                int aux=nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j],auxString);

            }
        }
    }

    //Inicializacion de arrays en paralelo.
    /*
    for(i=0;i<5;i++)
    {
        //usuario[i][0]=" ";
        strcpy(usuario[i],"" );
        //nota[i]=0;
    }
    strcpy(usuario[0],"hola" );
    printf("Hello %s \n",usuario[0]);
    printf("Hello %s \n",usuario[1]);
    */



    /*
    printf("Ingrese usuario: ");
    scanf("%s",usuario[0]);
    printf("Ingrese usuario: ");
    scanf("%s",usuario[1]);
    int tamanio= strlen(usuario[8]);
    printf("Tamaño: %d\n",tamanio);
    */


        // printf("Hello %s \n Nota: %d\n",usuario[i],nota[i]);



        //printf("Ingrese usuario #%d :",i+1);
        // //scanf("%s",usuario[i]);
        //gets(usuario[i]);
        //printf("Ingrese usuario #%d :",i+1);
        //scanf("d",nota[i]);
        /*
        printf("Ingrese nota #%d: ",i+1);
        scanf("%d",&nota[i]);
        */

        //printf("Hello %s \n",usuario[0]);
        //printf("Hello %s \n",usuario[1]);
        //printf("Hello %s \n",usuario[2]);











    return 0;
}

void mostrarVector(int datos[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("Nota: %d \n",datos[i]);
    }
}

void mostrarPalabras(char palabras[][10],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("Palabras: %s \n",palabras[i]);
    }
}

void cargarVector(int datos[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        datos[i]=-1;
    }
}
