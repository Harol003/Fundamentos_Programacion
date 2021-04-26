/*Ejemplo de uso de la función prinf*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Imprime texto entre comillas(solo caracteres ASCII)\n\n");
    printf("Para mostrar un caracter ASCII extendido en el texto entre comillas \xA0 \xA5 \n\n");
    /* Los datos enteros con signo ingresados en decimal, octal o hexa son convertidos a decimal con signo*/
    printf("Imprimir variables o numeros enteras %d %d %i %d %i \n\n",3,010,0x10,-0XA1,-0XA1);
    /* %05d completa con ceros a la izquierda hasta llegar a 5, %10d completa con espacios a la izquierda hasta llegar a 10,
    %-10d ocupa 10 espacios alineado a la izquierda*/
    printf("Imprimir variables o numeros enteras %05d %10d %-10d %d\n\n",123,12,12,12);
    /* %u si tienen signo los interpreta como positivos en modificador h indica que es un tipo de dato short int o sea de 16 bits
    en indicador l indicaque es un dato de 32 bits*/
    printf("Imprimir variables o numeros enteras sin signo %u %u %hu %hu %lu\n\n",3,-1,-1,-65535,-1);
    /* Imprime los numeros ingresados en decimal en hexadecimal %x en minuscula %X en mayuscula*/
    printf("Imprime variables o numeros en hexadecimal  %x %X \n\n",255,255);
    /* %f imprime en flotante o sea numeros con coma %.2f limita el número de decimales a 2 %10.3 completa con espacios a la izquiera y limita a 3 decimales*/
    printf("Imprime variables o numeros flotantes %f %.2f %10.3f \n\n",123.1234,123.1234,123.1234);
    /* %e imprime en notacion cientifica %E con la E mayuscula %.2e con dos decimales %10.3e con 3 decimales y 15 lugares en total*/
    printf("Imprime con notacion cientifica %e  %E  %.2e %15.3E\n\n",123.4567,123.4567,123.4567,123.4567);
    /* Si el numero no tiene puntodecimal lo presenta mal*/
    printf("Imprime con notacion cientifica siempre debe tener el punto decimal %e  %e\n\n",123,123.0);
    /* %c imprime como caracter el numero ingresado si pongo un caracter con comillas simples lo muestra*/
    printf("Imprime una variable tipo caracter ASCII %c %c %c \n\n",48,0x30,'0');
    /* %s imprime un string %10s imprime el string dejando ocupando 10 espacios alineado a la derecha */
    printf("Imprime un string %s %10s \n\n","abecedario","abc");
    /* %-10s imprime un string ocupando 10 espacios alineado a la izquierda*/
    printf("Imprime un string %-10s %s \n\n","abc","abc");
    /* %-10.4s imprime un string ocupando 10 espacios alineado a la izquierdo y limitando el numero de caracteres a 4
    %.3s limita la cantidad de caracteres a 3*/
    printf("Imprime un string %-10.4s %.3s \n\n","1234567","1234567");

    return 0;
}

