//codificado por sAfOrAs
//Insertar pesos en un arreglo
//Considero peso máximo de una persona 400 kilos !!!Increible
//El peso minimo uspongo que es el de un recien nacido aprox. 
#include<iostream>
#include "leearray.h"
using namespace std;
#define MAX 50
 
int leeCantidadElem()
{
    int n;
    do{
        cout<<"Cantidad de pesos a ingresar: ";cin>>n;
            if(n<=0)
                cout<<"...No seas payaso(a), ingresa una cantidad correcta: "<<endl;
            if(n>MAX)
                cout<<"...La cantidad maxima permitida es "<<MAX<<" : "<<endl;
    }while(n<=0 || n>MAX);
    return n;
}
 
int insertarPesos(int cant,double A[])
{
    int k,i,peso;
     
     
        do{
        cout<<"En que posicion desea insertar de [0] hasta ["<<cant-1<<"]: ";cin>>k;
            if(k>=cant)
                cout<<"No está habilitado esta celda para insertar un valor..."<<endl;
            if(k<0)
                cout<<"No trates de quererme soprender..."<<endl;
        }while(k>=cant||k<0);
        cout<<"Cual es el peso que desea insertar: ";cin>>peso;
        cant++;
        for(i=cant-1;i>=k;i--)
        {
            A[i+1]=A[i];
            if(k==i)
            A[k]=peso;      
        }
return cant;
}
 
int main( )
{
    int c;
    char opt;
    double n[MAX]; 
    cout<<"\t\t\tINSERTAR NUEVOS PESOS"<<endl;
    c=leeCantidadElem();
    leeCadena(c,n);
    do{
    c=insertarPesos(c,n);
    muestraCadena(c,n);
    cout<<"Desea ingresar otro peso!!!... S/s, caso contrario pulse otra tecla: ";cin>>opt;
    }while(opt=='s'||opt=='S');
}
