//CIDE 
//Profesor HHTN
//Codigo fuente: Triángulo de Pitágoras
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"TRIANGULO DE PITAGORAS"<<endl<<endl;
    float a,b,c;
    cout<<"Ingrese el Primer cateto"<<endl;
    cin>>a;
    cout<<"Ingrese el Segundo cateto"<<endl;
    cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
 
    cout<<"La Hipotenusa es:"<<"\n"<<c<<endl<<endl;
     
    cout<<"\t"<<"_\\"<<endl;
    cout<<"\t"<<"___\\"<<endl;
    cout<<"\t"<<"_____\\"<<endl;
    cout<<"\t"<<"_______\\"<<endl;
    cout<<"\t"<<"_________\\"<<endl;
    cout<<"\t"<<a<<"__________"<<c<<endl;
    cout<<"\t"<<"_____________\\"<<endl;
    cout<<"\t"<<"_______________\\"<<endl;
    cout<<"\t"<<"_________________\\"<<endl;
    cout<<"\t"<<"_________"<<b<<"__________\\"<<endl<<endl;
     
 
    cin.ignore();
    return 0;
 
}
