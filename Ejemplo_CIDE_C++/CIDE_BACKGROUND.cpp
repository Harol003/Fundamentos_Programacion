/*Ejemplo de color de texto y fondo*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <windows.h>
#include <stdio.h>
/*tengo que definir estas dos variables como globales (antes del main)*/
/*le asigno dos valores por defecto 15 (blanco mucha saturacion) para texto y 0 (negro) para el fondo*/
int ForgC=15;
int BackC=0;
//Puedo usar cualquiera de estas tres funcionnes cuyo prototipo detallo antes del main

//SetColorAndBackground me sirve para definir color de texto y fondo
//SetColorAndBackground(un numero entre 0 y 15 para el color del texto ,  un numero entre 0 -15 para el color del fondo)
void SetColorAndBackground(int ForgC, int BackC);
//textbackground me sirve para definir el color del fondo
//textbackground(un numero entre 0 -15 para el color del fondo)
void textbackground(int colorfondo);
//textcolor me sirve para definir el color del texto
//textcolor(un numero entre 0 -15 para el color del texto)
void textcolor(int colortexto);

int main()
{
    /*llamo a la funcion para cambiar el color del texto*/
    textcolor(4);
    /*a partir de aqui cambio el color del texto*/
    printf("Humano el texto sera rojo poco saturacion\n");
    /*llamo a la funcion para cambiar el color del fondo*/
    textbackground(15);
    /*a partir de aqui cambio el color del fondo*/
    printf("Humano el fondo sera blanco con mucha saturacion\n");
    /*llamo a la funcion para cambiar el color del texto*/
    textcolor(12);
    /*a partir de aqui cambio el color del texto*/
    printf("Humano  el texto sera rojo mucha saturacion\n");
    for(int i=0;i<10;i++)
    printf("CIDE Fundamentos de Programacion\n");
    /*llamo a la funcion para cambiar el color del texto y fondo*/
    SetColorAndBackground(15,0);
    /*a partir de aqui vuelvo a los colores por defecto*/
    printf("Humano el texto sera blanco mucha saturacion y el fondo negro\n");
    return 0;
}

/*definicion funcion para cambiar el color de texto y de fondo*/
void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}
/*definicion funcion para cambiar el color de texto */
void textcolor(int colortexto)
{

    ForgC=colortexto;
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}
/*definicion funcion para cambiar el color de fondo*/
void textbackground(int colorfondo)
{

    BackC=colorfondo;
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}

