#include <stdio.h>
#include <stdlib.h>
//int retorna enteros float retorna reales void no retorna char retorna caracteres.

void saludar(void);
int dameNumero(void);
float sacarPromedio(int suma,int cantidad);
void esPrimo (int numero);

int main()
{

    int edad;
    float altura;
    altura=82.5;
    edad=66;
    saludar();
    printf("Ingrese su edad: ");
    scanf(" %d",&edad);
    printf("Ingrese su altura: ");
    scanf(" %f",&altura);
    printf(" Su edad es: %d",edad);
    printf(" Su altura es: %f",altura);




    int contador;
    int numero;
    int suma;
    float promedio;
    int limite;
    contador=0;
    suma=0;
    limite= dameNumero();
    promedio=0;



    while(contador < limite)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);

        suma=suma+numero;
        contador ++;
        //promedio= (float)suma/contador;
        promedio=sacarPromedio(suma,contador);
    }
    printf("El promedio es: %f",promedio);








    return 0;
}

void saludar (void)
{
    printf("hola mundo C\n");
}
int dameNumero(void)
{
    int cantidad;
    printf("Ingrese la cantidad de interacciones: ");
    scanf(" %d",&cantidad);
    return cantidad;
}
float sacarPromedio(int suma,int cantidad)
{
    float promedio;
    promedio= (float)suma/cantidad;
    return promedio;

}
