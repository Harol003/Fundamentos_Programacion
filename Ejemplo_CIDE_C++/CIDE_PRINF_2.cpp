/* cómo mostrar caracteres especiales (acentos, etc.) en consola de windows */
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
    printf("Buen d\0241a!\n"); // 0241 es el ASCII de í en octal (
    getch();
    printf("Buen d%ca!\n",161);  // %c se reemplaza por el código ascii 161 -> i con acento
    getch();
    printf("%c",160); // á
    printf("%c",130); // é
    printf("%c",161); // í
    printf("%c",162); // ó
    printf("%c",163); // ú
    return 0;
}
