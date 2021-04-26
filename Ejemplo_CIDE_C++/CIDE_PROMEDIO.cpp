/* Calcula el promedio de una cierta cantidad de numeros, ejemplo de for*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant,i,num;
    float prom,suma=0;
    
    printf("Calculo del promedio de cierta cantidad de numeros\n");
    printf("Ingrese la cantidad de numeros a la cual quiere calcularle el promedio\n");
    scanf("%d", &cant);
    for (i = 0; i < cant; i++)
    {
        printf("Ingrese el numero %d \n", i+1);
        scanf("%d", &num);
        suma = suma + num;  // acumula la sumatoria de los números que se ingresan
    }
    prom = suma / cant;
    printf("El prmedio es %f\n", prom);
    return 0;
}

