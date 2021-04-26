//CIDE 
//Profesor HHTN
//Codigo Fuente: Triangulos Identificacion Equilatero + isoceles + Rectangulo
#include <iostream.h>
main()
{int a,b,c;
 cout<<"\n ingrese lado A:";
 cin>>a;
 cout<<"\n ingrese lado B:";
 cin>>b;
 cout<<"\n ingrese lado C:";
 cin>>c;
if(a+b<c||a+c<b||b+c<a)
cout<<"\n No forman un triangulo";
else
{if(a==b&&a==c&&b==c)
 cout<<"\n Forman un triangulo equilatero";
 else
  {
  if(a==b||a==c||b==c)
  cout<<"\n Forman un triangulo isoceles";
  else
   {if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
    cout<<"\n Forman un triangulo rectangulo";
    else
    cout<<"\n Forman un triangulo escaleno";
   }
  }
 }
return 0;
}
