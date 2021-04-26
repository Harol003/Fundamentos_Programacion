/*Ejemplo de vectores 2*/
/*Se ingresa el numero de inscripcion, la materia y la nota de cada alumno*/
/*Se ingresa 0 para dejar de ingresar notas, la maxima cantidad de notas que se pueden ingresar es 1000*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Se crean tres vectores con la cantidad maxima de notas que se pueden ingresar*/
    /*Uno para el numero de inscripcion del alummno, otro para la materia y otro para la nota*/
    int nro_inscripcion[1000],materia[1000],i;
    float nota_alumno[1000];
    /*Se ingresan como maximo 1000 datos*/
    for(i=0; i<1000; i++)
    {
        /*Se ingresa en numero de inscripcion y se la guarda en la posicion i del vector correspondiente*/
        printf("Ingrese el numero de inscripcion:\t\n");
        scanf("%i",&nro_inscripcion[i]);
        /*Si el nuero de inscripcion es 0 se deja de ingresar datos*/
        if(nro_inscripcion[i]==0)
            break;
        /*Se ingresa la materia se guarda en la posicion i del vector materias solo si es correcto su numero*/
        do
        {
            printf("Matematica 1 - Lengua 2 - Ingles 3 - Sociales 4\n");
            printf("Ingrese la materia:\t\n");
            scanf("%i",&materia[i]);
            if(!(materia[i]<=4&&materia[i]>=1))
                printf("Nro de materia incorrecto\n");
        }
        while(!(materia[i]<=4&&materia[i]>=1));
        /*Se ingresa la nota y se guarda en la posicion i del vector de notas solo si es una nota posible*/
        do
        {
            printf("Ingrese la nota:\t\n");
            scanf("%f",&nota_alumno[i]);
            if(!(nota_alumno[i]<=10&&nota_alumno[i]>=1))
                printf("Nota incorrecta\n");
        }
        while(!(nota_alumno[i]<=10&&nota_alumno[i]>=1));
        system("cls");
    }
    /*Se muestra en pantalla el listado de Nro de inscripcion, materia y notas hasta encontrar un numero de inscripcion igual a 0*/
    system("cls");
    i=0;
    do
    {
        printf("Nro de inscripcion:%i Materia:%i Nota:%.2f\n",nro_inscripcion[i],materia[i],nota_alumno[i]);
        i++;
    }
    while(nro_inscripcion[i]!=0);

    return 0;
}
