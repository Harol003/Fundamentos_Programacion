/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char palabra[50];
    int f;
    int vocales=0;
    int consonantes=0;
    printf("Ingrese una palabra:");
    gets(palabra);
    for(f=0;f<strlen(palabra);f++)
    {
        switch (palabra[f]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':vocales++;
                     break;
            default: consonantes++;
        }
    }
    printf("La cantidad de vocales que tiene la palabra son:%i\n",vocales);
    printf("La cantidad de consonantes que tiene la palabra son:%i",consonantes);
    getch();
    return 0;
}
