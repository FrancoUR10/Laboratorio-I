#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Ver algoritmos de ordenamientos.
// El compilador multiplica desde esa posision que se le asigno.
int main()
{
    char usuario[][10]={"Jose","Maria","Jesus","Melchor","Gaspar"}; //Se toma como un solo dato. //Pregunta de parcial, que indica el primer array y el segundo de esta variable.
    int nota[10]={8,5,2,10,3}; //Se toma como varios datos.
    int i;
    int j;
     for(i=0;i<5;i++)
    {
        printf("Hello %s \n Nota: %d\n         ",usuario[i],nota[i]);
    }

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
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("Hello %s \n Nota: %d\n         ",usuario[i],nota[i]);
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
        //scanf("%s",usuario[i]);
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
