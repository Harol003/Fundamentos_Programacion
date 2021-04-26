/*Ejemplo de vectores 1*/
/*Se ingresan las temperaturas a lo largo del dia*/
/*Luego se indica la hora a la cual se quiere saber la temperatura*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int datos[24],i,hora;
    printf("Se ingresan las temperaturas a lo largo de un dia\n");

    /*Se guardan las temperauras en un vector*/
    for(i=0;i<24;i++){
        printf("Ingrese la temperatura de las %i hs:\t",i);
        scanf("%i",&datos[i]);
    }
    system("cls");
    printf("Indique la hora a la cual quiere saber la temperatura.");
    printf("\nPara salir coloque una temperatura mayor o igual a 24.");
    printf("\n");
    /*Se busca en el vector la temperatura a la hora deseada*/
    printf("\nHora:\t");
    scanf("%i",&hora);
    system("cls");
    while(hora<=23)
        {
        printf("la temperatura a las %i hs. fue de %i grados",hora,datos[hora]);
        printf("\n\nHora:\t");
        scanf("%i",&hora);
        system("cls");
    }
    return 0;
}
