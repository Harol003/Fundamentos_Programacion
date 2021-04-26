//CIDE 
//Profesor HHTN
//Numero Mayor de 5 numeros ingresados
#include <iostream.h>
main()
{int a,b,c,d,e,may;
 cout<<"\n ingrese numero a:";
 cin>>a;
 cout<<"\n ingrese numero b:";
 cin>>b;
 cout<<"\n ingrese numero c:";
 cin>>c;
 cout<<"\n ingrese numero d:";
 cin>>d;
 cout<<"\n ingrese numero e:";
 cin>>e;
 if(a>b)
 may=a;
 else
 may=b;
 if(c>may)
 may=c;
 if(d>may)
 may=d;
 if(e>may)
 may=e;
 cout<<"\n el mayor es: "<<may;
return 0;
}
