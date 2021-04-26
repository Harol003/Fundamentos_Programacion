//CIDE 
//Profesor HHTN
//Codigo Fuente: Calcula cuantos numeros pares hay entre dos ingresados
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    cout<<"ingrese un numero: ";cin>>a;
    cout<<"ingrese otro numero: ";cin>>b;
    while(a<=b)
    {
        if(a%2!=0)
        c=c+1; a=a+1;       
    }
    cout<<c<<endl;
    cin.ignore(); 
    system("PAUSE"); //Solo ponla si no te da error
    return 0;
}
