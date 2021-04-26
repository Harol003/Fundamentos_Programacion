//CIDE 
//Profesor HHTN
//Codigo Fuente: Leer e imprimir valor de un vector
#include <iostream.h>
#include <conio.h>
main()
{int a[5],i;
 for(i=0;i<5;i++)
 {cout<<"\n Ingrese a["<<i<<"]=";
  cin>>a[i];
 }
 for(i=0;i<5;i++)
 {cout<<"\n a["<<i<<"]="<<a[i];
 }
  getch();
  return 0;
}