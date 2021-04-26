/* Programa para obtener el tamaño de */
/* variables del C en bytes */
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/

#include <stdio.h>
#include <conio.h>
int main( ) {
	printf( "\nchar \t\t%d bytes", sizeof( char ));
	printf( "\nint \t\t%d bytes", sizeof( int ));
	printf( "\nshort \t\t%d bytes", sizeof( short ));
	printf( "\nlong \t\t%d bytes", sizeof ( long ));
	printf( "\nunsigned char \t%d bytes", sizeof( unsigned char ));
	printf( "\nunsigned int \t%d bytes" , sizeof( unsigned int )) ;
	printf( "\nunsigned short \t%d bytes" , sizeof( unsigned short ));
	printf( "\nunsigned long \t%d bytes", sizeof( unsigned long));
    printf( "\nfloat \t\t%d bytes", sizeof ( float ));
    printf( "\nlong double \t%d bytes", sizeof ( long double ));
    printf( "\ndouble \t\t%d bytes \n", sizeof( double ));
	getch();
    return 0;
}
