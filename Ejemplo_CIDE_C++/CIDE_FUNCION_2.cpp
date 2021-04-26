/*Ejemplo de como pasar un vector como parámetro de una función*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>
int buscar_maximo(float valores[], int num_valores);
float promedio(float valores[], int largo);
void cuadrados(float vector[], int largo);
int main()
{
    float datos[100],val,prome;
    int i,nro_datos=0,lugarmaximo;
    printf("Ingrese los elementos de un vector, los numeros pueden variar entre -10 y +10\n");
    printf("Si se ingresa un numero fuera del rango termina el ingreso de datos.\n\n");
    for(i=0; i<100; i++)
    {
        printf("Ingrese el dato %d: ",i+1);
        scanf("%f",&val);
        if(val>10||val<=-10)
            break;
        datos[i]=val;
        nro_datos++;
    }
    /*Indico en que posicion esta el maximo del vector*/
    lugarmaximo=buscar_maximo(datos,nro_datos);
    printf("\nEl maximo ingrasado fue el dato: %d\n",lugarmaximo);

    /*Calculo el promedio de un vector de cierta cantidad de elementos*/
    prome=promedio(datos,nro_datos);
    printf("\nEl promedio del vector es: %f\n",prome);

    /*Elevo los elementos de un vector al cuadrado*/
    printf("\nEl vector ingresado es:\n");
    for(i=0; i<nro_datos; i++)
    {
        printf("%.2f\n",datos[i]);
    }
    cuadrados(datos,nro_datos);
    printf("\nEl vector al cuadrado es:\n");
    for(i=0; i<nro_datos; i++)
    {
        printf("%.2f\n",datos[i]);
    }
    return 0;
}
/*Funcion que determina en que posicion esta el maximo del vector de cierta cantidad de elementos*/
int buscar_maximo(float valores[], int num_valores)
{
    int maximo_pos = 0,i;
    for (i = 0; i < num_valores; i++)
    {
        if (valores[i] > valores[maximo_pos])
        {
            maximo_pos = i;
        }
    }
    return maximo_pos+1;
}
/*Funcion para calcular el promedio de un vector de cierta cantidad de elementos*/
float promedio(float valores[], int largo)
{
    int i;
    float suma=0;
    for (i=0; i<largo; i++)
    {
        suma+=valores[i];
    }
    return suma/largo;
}
/*Funcion que eleva atodos los elementos de un vector al cuadrado*/
void cuadrados(float vector[], int largo)
{
    int i;
    for (i=0; i<largo; i++)
    {
        vector[i]=vector[i]*vector[i];
    }
}

