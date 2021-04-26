#include <iostream.h>
#include <conio.h>
main()
{int a[5],i,may;
 for(i=0;i<5;i++)
 {cout<<"\n Ingrese a["<<i<<"]=";
  cin>>a[i];
 }
 may=a[0];
 for(i=0;i<5;i++)
 { if(a[i]>may)
   may=a[i]; 
 }
 cout<<"\n  El mayor es:"<<may;
  getch();
  return 0;
}
