//CIDE 
//Profesor HHTN
//Bloques C++
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{  //------------------------- apertura de bloque main B1 
int x,pasx;    // declaraciones de variables locales al bloque main 
               // son visibles (accesibles) en este bloque y todos 
               // los subbloques 
   {  //----------apertura B2 
      int c; 
      x=0; 
      c=rand()%256; 
      pasx=rand()%5; 
   }  // ---------cierre B2 
   x=640; 
   {  // ---------apertura B3 
      //c=10; // provoca error, c no es visible en este bloque 
      x/=2; 
      pasx=15; 
   }  // ---------cierre B3 
   x+=pasx; 
   printf("x vale : %d\n",x);  // ¿resultado?  
   return 0; 
   }
