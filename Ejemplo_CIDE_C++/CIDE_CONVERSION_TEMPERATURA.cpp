//programa para pasar de Centigrados a Kelvin y a la inversa
//ejemplo para ingresar caracteres como variable
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <stdlib.h>
char letra;
float temperatura;
int main()
{
    do
    {
        printf("Ingrese un C para Centigrados y K para Kelvin. S o s para salir del programa\n");
        scanf("%c", &letra);
        fflush(stdin);
        if(letra=='S'||letra=='s')
            break; // Para salir del do...while
        printf("Opcion ingresada %c\n",letra);
        while(letra!='C'&&letra!='K')
        {
            printf("Opcion incorrecta debe ingresar C o K\n");
            scanf("%c", &letra);
            fflush(stdin);
            printf("letra ingresada %c\n",letra);
        }
        if(letra=='C')
        {
            printf("Ingrese el valor de temperatura en grados Centigrados\n");
            scanf("%f",&temperatura);
            fflush(stdin);
            printf("La temperatura en grados Kelvin es: %.2f\n \n", temperatura+273);
        }
        if(letra=='K')
        {
            printf("Ingrese el valor de temperatura en grados Kelvin\n");
            scanf("%f",&temperatura);
            fflush(stdin);
            printf("La temperatura en grados Centigrados es: %.2f\n \n", temperatura-273);

        }
    }
    while(1);
    return 0;
}
