//Libreria: 
"leearray.h"
#include<iostream>
using namespace std;
void leeCadena(int cant,double n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        do{
        cout<<"Ingresa peso en A["<<i<<"] : ";
        cin>>n[i];
        if (n[i]<=0)
            cout<<"No seas chistoso y escriba un peso correcto:"<<endl;
        if(n[i]>400)
            cout<<"Esta Ud. a punto de reventar!!!, lo siento no puedo creerlo."<<endl;
        }while(n[i]<=4 || n[i]>400);
    }
     
}
 
void muestraCadena(int cant,double n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"A["<<i<<"] : "<<n[i]<<endl;
    }
}