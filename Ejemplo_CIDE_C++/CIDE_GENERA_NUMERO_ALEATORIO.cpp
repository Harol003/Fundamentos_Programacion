/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// muestra cómo generar números aleatorios

int main()
{
    /* inicializa generador de pseudoaleatorios */
    srand( time(NULL) );

    // aleatorio
    printf("%d\n", rand() );
    
    // aleatorio entre 0 y 9
    printf("%d\n", rand() % 10);
    
    // aleatorio entre 1 y 10 
    printf("%d\n", rand() % 10 + 1);
    
    return 0;
}
