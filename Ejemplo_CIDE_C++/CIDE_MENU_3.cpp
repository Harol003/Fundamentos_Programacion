// Plantilla de un Menú de Opciones

#include <iostream>
#include<conio.h>
#define d 4

void burbuja();
void insercion();
void seleccion();
void shell();

void main()

{

int x;
cout<<"**************Menu*****************";
cout<<endl;
cout<<endl;
cout<<"1.-Ordenamiento por Metodo Burbuja";
cout<<endl;
cout<<"2.-Ordenamiento por Metodo Insercion";
cout<<endl;
cout<<"3.-Ordenamiento por Metodo Seleccion";
cout<<endl;
cout<<"4.-Ordenamiento por Metodo Shell";
cout<<endl;
cout<<endl;
cout<<"ELIGE UNA OPCION:";
cin>>x;
cout<<endl;
cout<<endl;


switch (x){
case 1:burbuja();
break;
case 2:insercion();
break;
case 3:seleccion();
break;
case 4:shell();
break;

default: cout<<"ERROR EN LA SECCION";
}
getch();
}



void burbuja()
{
char salir;
int N,Aux,J,opcion;
int V[10];
int I;
clrscr();

cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
cin>>N;
for(I=0; I<N; I++)
{
cout<<"Ingrese dato "<<I+1<<":";
cin>>V[I];
}
for (I=0; I<N-1; I++)
for (J=0; J<(N-1)-I; J++)
if (V[J]>V[J+1])
{
Aux=V[J];
V[J]=V[J+1];
V[J+1]=Aux ;
}

cout<<"Los numeros de forma ordenada son:";
for(I=0; I<N; I++)
cout<<endl<<V[I];
getch();



}




void insercion()
{
int N,Aux,J,SW;
int V[10];
int I;
clrscr();

cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
cin>>N;
for(I=0; I<N; I++)
{
cout<<"Ingrese dato "<<I+1<<":";
cin>>V[I];
}
for (I=1; I<N;I++)
{
Aux=V[I];
J=I-1;
SW=1;
while (SW&&J>=0)
{
if (Aux<V[J])
{
V[J+1]=V[J];
J--;
}
else
SW=0;
}
V[J+1]=Aux;
}



cout<<"Los numeros de forma ordenada son:";
for(I=0; I<N; I++)
cout<<endl<<V[I];

getch();
}




void seleccion()
{
int J,I,N,K;
int V[10];
int Sw;
int Aux;
clrscr();
cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
cin>>N;
for(I=0; I<N; I++)
{
cout<<"Ingrese dato "<<I+1<<":";
cin>>V[I];
}

for(I=0; I<N-1; I++)
{
K=I;
for (J=I+1; J<N; J++)
if (V[J]<V[K])
K=J;

Aux=V[I];
V[I]=V[K];
V[K]=Aux;
}


cout<<"Los numeros de forma decrecciente son:";
for(I=N-1; I>=0; I--)
cout<<endl<<V[I];
getch();
}



void shell()
{
int J,I,N,K,INC,TMP;
int V[10];
int Sw;
int Aux;
clrscr();
cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
cin>>N;
for(I=0; I<N; I++)
{
cout<<"Ingrese dato "<<I+1<<":";
cin>>V[I];
}

INC=N/2;
do {
for(I=INC; I<N; I++)
{
TMP=V[I];
J=I-INC;
while ((J>=0)&&(TMP<V[J]))
{
V[J+INC]=V[J];
J-=INC;
}
V[J+INC]=TMP;
}
INC/=2;
}
while(INC!=0);


cout<<"Los numeros de forma decrecciente son:";
for(I=0; I<N; I++)
cout<<endl<<V[I];
getch();
}
