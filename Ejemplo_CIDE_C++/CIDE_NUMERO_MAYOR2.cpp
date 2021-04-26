/*Ejemplo de continue y break*/
/*Ingresar como máximo 100 números enteros, calcular el menor y el mayor*/
/*solo de los positivos, con 0 se dejan de ingresar números*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_ingresado,menor=100000,mayor=0,i;
    for(i=1; i<=100; i++)
    {
        printf("Ingrese el numero %i: ",i);
        scanf("%i",&numero_ingresado);
        if(numero_ingresado==0)
            break;
        if(numero_ingresado<0)
            continue;
        if(numero_ingresado<menor)
            menor=numero_ingresado;
        if(numero_ingresado>mayor)
            mayor=numero_ingresado;
    }

    printf("\nEl menor es igual a: %i\n",menor);
    printf("El mayor es igual a: %i\n",mayor);

    return 0;
}
