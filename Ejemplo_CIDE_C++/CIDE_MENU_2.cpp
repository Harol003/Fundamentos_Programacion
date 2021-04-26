#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
int op,i,pos,end;
char key;
pos = 0;
end = 0;
gotoxy(5,2);printf("MENU");
highvideo();textbackground(GREEN);
gotoxy(2,3);printf("1.- Ingresar Paciente");
lowvideo();textbackground(BLACK);
gotoxy(2,4);printf("2.- Consultar Informacion");
gotoxy(2,5);printf("3.- Borrar Registro");
gotoxy(2,6);printf("4.- Salir");
do{
key = getch();
switch(key)
{
case 72: if (pos == 0)
pos = 3;
else pos--;
break;
case 80: if (pos == 3) pos =0;
else pos++;
break;
case 13: end = 1;
}
switch(pos)
{
case 0: gotoxy(5,2);printf("MENU");
highvideo();textbackground(GREEN);
gotoxy(2,3);printf("1.- Ingresar Paciente");
lowvideo();textbackground(BLACK);
gotoxy(2,4);printf("2.- Consultar Informacion");
gotoxy(2,5);printf("3.- Borrar Registro");
gotoxy(2,6);printf("4.- Salir");
break;
case 1: gotoxy(5,2);printf("MENU");
gotoxy(2,3);printf("1.- Ingresar Paciente");
highvideo();textbackground(GREEN);
gotoxy(2,4);printf("2.- Consultar Informacion");
lowvideo();textbackground(BLACK);
gotoxy(2,5);printf("3.- Borrar Registro\n\n");
gotoxy(2,6);printf("4.- Salir");
break;
case 2: gotoxy(5,2);printf("MENU");
gotoxy(2,3);printf("1.- Ingresar Paciente");
gotoxy(2,4);printf("2.- Consultar Consultar Informacion Informacion");
highvideo();textbackground(GREEN);
gotoxy(2,5);printf("3.- Borrar Registro\n\n");
lowvideo();textbackground(BLACK);
gotoxy(2,6);printf("4.- Salir");
break;
case 3: gotoxy(5,2);printf("MENU");
gotoxy(2,3);printf("1.- Ingresar Paciente");
gotoxy(2,4);printf("2.- Consultar Informacion");
gotoxy(2,5);printf("3.- Borrar Registro\n\n");
highvideo();textbackground(GREEN);
gotoxy(2,6);printf("4.- Salir");
lowvideo();textbackground(BLACK);
break;
}
}while(!end);
gotoxy(1,10);
system("PAUSE");
return 0;
}
