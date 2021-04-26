//CIDE 
//Profesor HHTN
//Ordena el número de números 
#include<stdio.h>
#include<conio.h>
using namespace std;
main()
{
int a,b,c;
printf("ingrese tres numeros");
scanf("%d%d%d",&a,&b,&c);
if(c>b&&b>a) printf("el orden es el siguiente %d%d%d",a,b,c);
else if(a>b&&b>c)printf("el orden es el siguiente %d%d%d",c,b,a);
else if(a>b&&c>a)printf("el orden es el siguiente %d%d%d",b,a,c);
else if(a>c&&c>b)printf("el orden es el siguiente %d%d%d",b,c,a);
else if(b>c&&b>a&&a>c)printf("el orden es el siguiente %d %d %d",c,a,b);
else printf("el orden es el siguiente %d%d%d",a,c,b);
getch();
}
