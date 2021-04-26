/* Ejemplo de break*/
/* Ingresar números enteros, calcular el menor y decir en que */
/* orden ingreso, con 0 se dejan de ingresar números */
/* Los nros deben estar en rango -999999999 .. 999999999 */
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_ingresado, orden_menor, menor = 1, i = 1, j;

    // calculo el mayor nro posible para valor inicial de menor
    for(j = 0; j < (sizeof(int) * 8); j++)
    {
        menor=menor * 2;
    }

    // inicio ingreso de datos
    do
    {
        printf("Ingrese el numero %i: ", i);    
        scanf("%9i", &numero_ingresado);
        fflush(stdin);

        /* verifico si el nro ingresado está dentro del rango */
        if(numero_ingresado >= 99999999 || numero_ingresado <= -99999999)
        {
            printf("Fuera de rango\n");
            /* vuelvo al inicio del do..while */
            continue;
        }

        /* si se ingreso cero... */
        if(numero_ingresado == 0)
            /* ...sale del do..while */
            break;

        /* si el nro. ingresado es menor que el menor almacenado... */
        if(numero_ingresado < menor)
        {
            /* ...lo guardo como nuevo menor */
            menor=numero_ingresado;

            /* guardo el nro. de orden */
            orden_menor=i;
        }
        i++;
    }
    while(1);

    printf("\nEl menor es igual a: %i y ingreso en la posicion %i\n",menor, orden_menor);

    return 0;
}
