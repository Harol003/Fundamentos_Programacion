/*
conversión de tipos y casting
*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <stdlib.h>

int a;
int b;
float c;
float d;
int e;

int main(){
    printf("Variables tipos!\n");
    printf("Conversión de tipos y casting!\n");
    printf("Ingrese un numero entero ");
    scanf("%d", &a);
    printf("Ingrese un numero entero ");
    scanf("%d", &b);
    printf("Ingrese un flotante ");
    scanf("%f", &c);
    d = (a + b) / 3.0;
    printf("El resultado es: %f\n",d);
    d = (a + b) / 3;
    printf("El resultado es: %f\n",d);
    d = (float)((a + b) / 3);
    printf("El resultado es: %f\n",d);
    d = (float)(a + b) / 3;
    printf("El resultado es: %f\n",d);
    d = (a + c) / 3;
    printf("El resultado es: %f\n",d);
    e = (a + c) / 3;
    printf("El resultado es: %d\n",e);
/* getch(); */
    return 0;
}
