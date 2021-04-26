/*Ejemplo de uso de la funcion scanf*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    char d;
    char str1[30];
/* %d para ingresar un número entero*/
    printf("Ingrese un entero\n");
    scanf("%d",&a);
    printf("El numero ingresado es : %d\n\n",a);
/*Se puede limitar la cantidad de numeros ingresados en el ejemplo solo toma los dos primeros.
Para lograrlo antepongo el número de caracteres que quiero limitar. Como nu leo todo el buffer de teclado
debo limpiarlo usando la sentencia fflush(stdin);*/
    printf("Ingrese un entero mayor que 100\n");
    scanf("%2d",&a);
    printf("El numero ingresado es : %d\n\n",a);
    fflush(stdin);
/* %hd limita el entero ingresado a un mumero de 16 bits*/
    printf("Ingrese un entero mayor 65535\n");
    scanf("%hd",&a);
    printf("El numero ingresado es : %d\n\n",a);

    printf("Ingrese un entero menor a 65535\n");
    scanf("%hd",&a);
    printf("El numero ingresado es : %d\n",a);
/* %x puedo ingresar numeros en hexadecimal y mostrarlos en hexadecimal o decimal*/
    printf("Ingrese un entero en hexadecimal\n");
    scanf("%x",&a);
    printf("El numero ingresado decimal es : %d\n",a);
    printf("El numero ingresado hexadecimal es : %x\n\n",a);
/* %i puedo ingresar los numeros en decimal hexadecimal u octal */
    printf("Ingrese un entero en hexadecimal como 0x--- o el numero decimal\n");
    scanf("%i",&a);
    printf("El numero ingresado decimal es : %d\n",a);
    printf("El numero ingresado hexadecimal es : %x\n\n",a);
/* %f para ingresar numeros reales */
    printf("Ingrese un real con varios numeros en la parte decimal\n");
    scanf("%f",&b);
    printf("El numero ingresado es : %f\n\n",b);
/* %e para ingresar números de forma exponencial */
    printf("Ingrese un real con notacion exponencial formato +/-x.xxe+/-xx\n");
    scanf("%e",&b);
    printf("El numero ingresado es : %e\n",b);
/* %g para ingresar numeros reales o en notacion exponencial*/
    printf("Ingrese un real con notacion exponencial formato +/-x.xx...e+/-xx o un numero real\n");
    scanf("%g",&b);
    printf("El numero ingresado es : %g\n",b);
    fflush(stdin);
/* %s para ingresar un string (no es recomendable el uso de scanf con este fin)*/
    printf("Ingrese su nombre ");
    scanf("%s", str1);
    printf("Su nombre es: %s\n", str1);
/* puedo limitar el número de caracteres ingresados anteponiendo la cantidad */
    printf("Ingrese una palabla de mas de tres letras ");
    scanf("%3s", str1);
    printf("Su nombre es: %s\n", str1);
    fflush(stdin);
/* %c para ingresar un unico caracter */
    printf("Ingrese un caracter\n");
    scanf("%c",&d);
    printf("El caracter ingresado es : %c\n",d);
    return 0;
}

