/* Programa para calcular el producto de dos numeros ejemplo de llamado a función*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include<stdio.h>
#include<conio.h>

int producto (int x, int y); /*esto es el prototipo de la funcion*/

int main(void) {
    int a,b,c;
    /*pide el primer numero*/
    printf("Entre un numero entre 1 y 100 : ");
    scanf("%d",&a);
    /*pide el segundo numero*/
    printf("\nEntre otro numero entre 1 y 100 : ");
    scanf("%d",&b);
    /*calcula el producto y lo muestra*/
    c = producto(a,b); /*Aca se usa la funcion*/
    printf("\n%d veces %d es = %d \n",a,b,c);
    getch();
    return 0;
}

/*Esto es la definicion de la funcion*/
/*Funcion que cuando la llamo regresa el producto*/
int producto(int x,int y) {
    return( x * y);
}
