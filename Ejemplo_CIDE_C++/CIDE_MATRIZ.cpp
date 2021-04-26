/*Ejemplo para mostrar el uso de una matriz de caracteres, */
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrar_mensaje (char mensaje[][80], int linea);
//prototipo de la funcion para mostrar cierto mensaje

int main()
{
    char mensaje_error[5][80] = { "Archivo no encontrado",
    "El archivo no se puede abrir para escritura",
    "El archivo está vacio",
    "El archivo contiene datos de tipo incorrecto",
    "El archivo esta siendo usado" };
    //creo una matriz con todos los mensajes que quiero mostrar

    char apellidos [10][50];
    //creo una matriz para guardar los apellidos

    srand (time(NULL));
    //inicio la semilla paga generar un numero aleatorio

    printf("El segundo mensaje de error es: %s \n", mensaje_error[4]);
    //muestro un mensaje usando printf
    printf("La primera letra del tercer mensaje de error es: %c \n", mensaje_error[2][0]);
    //muestro una letra de cierto mensaje usando printf
    puts(mensaje_error[3]);
     //muestro un mensaje usando puts
     //es equivaleante a usar en el printf %s\n
    mostrar_mensaje(mensaje_error,1);
    //llamo a una funcion para mostrar cierto mensaje

    for(int i=0;i<10;i++)
    {
        printf("Ingrese el apellido %d: ",i+1);
        fgets(apellidos[i],50,stdin);
    }
    //ingreso una lista de 10 apellidos usando la funcion fgets
    printf("Los apellidos ingresados son:\n");
    for(int i=0;i<10;i++)
    {
       puts(apellidos[i]);
    }
    //muestro los apellidos note que por usar puts salta al renglon siguiente
    //pero como ademas como imprime hasta el \0 del string,
    //me toma el enter \n que quedo guardado en el string de cada apellido

    printf("Se eligen 4 apellidos al azar de los ingresados\n");
    for(int i=0,j;i<4;i++)
    {
    //las variables j e i solo existen dentro de este bloque
       j = rand () % 10;
    //genero un nuero aleatorio entre 0 y 9
       printf("%s",apellidos[j]);
    }

    return 0;
}
void mostrar_mensaje (char mensaje[][80],int linea)
{
puts(mensaje[linea]);
}
//defino la funcion para mostrar cierto mensaje
