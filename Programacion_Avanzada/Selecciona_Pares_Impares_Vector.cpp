//CIDE 
//Profesor HHTN
//Codigo Fuente: Selecciona_Pares_Impares
#include <iostream.h>
#include <conio.h>
main()
{int a[5],b[5],c[5],i,k=0,h=0;
 for(i=0;i<5;i++)
 {cout<<"\n Ingrese a["<<i<<"]=";
  cin>>a[i];
 }
 for(i=0;i<5;i++)
 { if(a[i]%2==0)
   {b[k]=a[i];k++;}
   else
   {c[h]=a[i];h++;}
 }
 cout<<"\nLos pares son:";
 for(i=0;i<k;i++)
 cout<<"\nb["<<i<<"]="<<b[i];
 cout<<"\nLos impares son:";
 for(i=0;i<h;i++)
 cout<<"\nc["<<i<<"]="<<c[i];
   getch();
  return 0;
}