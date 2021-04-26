/*Ejemplo de vectores 3*/
/*Se ingresa el numero de inscripcion, la materia y la nota de cada alumno*/
/*Se ingresa 0 en el numero de inscripcion para dejar de ingresar notas*/
/*Los numeros de inscripcion pueden variar entre 1 y 1000, las materias entre 1 y 4,*/
/*y las notas entre 1 y 10(pueden tener decimales)*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro_inscripcion,materia;
    /*Se crea un vector de dos dimensiones para almacenar las notas de los alumnos*/
    /*Una de las dimensiones es el numero de inscripcion posible y la otra las materias posibles*/
    float nota_alumno[1001][4];
    /*Le doy un valor cero a cada elemento del vector de dos dimensiones*/
    for(nro_inscripcion=0; nro_inscripcion<1000; nro_inscripcion++)
    {
        for(materia=0; materia<4; materia++)
        {

            nota_alumno[nro_inscripcion][materia]=0;
        }

    }

    for(;;)
    {
        system("cls");
/* Se ingresa el nro de inscripcion el cual esta entre 1 y 1000*/
/* Se ingresa 0 para dejar de ingresar datos*/
        do
        {
        printf("Ingrese el numero de inscripcion:\t\n");
        scanf("%i",&nro_inscripcion);
        if(!(nro_inscripcion>=0&&nro_inscripcion<=1000))
            printf("Nro de inscripcion incorrecto\n");
        }while(!(nro_inscripcion>=0&&nro_inscripcion<=1000));
        if(nro_inscripcion==0)
            break;
/* Se ingresa la materia el cual esta entre 0 y 4*/
        do
        {
            printf("Matematica 0 - Lengua 1 - Ingles 2 - Sociales 3\n");
            printf("Ingrese la materia:\t\n");
            scanf("%i",&materia);
            if(!(materia<=3&&materia>=0))
                printf("Nro de materia incorrecto\n");
        }
        while(!(materia<=3&&materia>=0));
/* Se ingresa la nota el cual esta entre 1 y 10*/
        do
        {
            printf("Ingrese la nota:\t\n");
            scanf("%f",&nota_alumno[nro_inscripcion][materia]);
            if(!(nota_alumno[nro_inscripcion][materia]<=10&&nota_alumno[nro_inscripcion][materia]>=1))
                printf("Nota incorrecta\n");
        }
        while(!(nota_alumno[nro_inscripcion][materia]<=10&&nota_alumno[nro_inscripcion][materia]>=1));
    }
    system("cls");
/*Imprime las noras ingresadas cuando son distintas de cero*/

    for(nro_inscripcion=0; nro_inscripcion<1000; nro_inscripcion++)
    {
        for(materia=0; materia<4; materia++)
        {

            if(nota_alumno[nro_inscripcion][materia]!=0)
                printf("Nro de inscripcion:%i \tMateria:%i \tNota:%.2f\n",nro_inscripcion,materia,nota_alumno[nro_inscripcion][materia]);
        }

    }

    return 0;
}
