/*
	  Un ejemplo con condicionales (if)
  
      Este programa calcula la superficie de varias figuras
      Presenta un "menúº" de opciones para elegir figura y luego
      solicita el ingreso de los datos necesarios.
  */
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
  #include <stdio.h>
  #include <stdlib.h>
  
  /* definimos PI como constante */
  #define PI 3.14159
  
  int main() {
      char opcion = 0;
      float base, altura;
      float superficie = 0;
  
      /* presenta menú; de opciones */
      printf("Cálculo de volúmen\n");
      printf("Seleccione una opciú;n:\n");
      printf("T --> Trángulo\n");
      printf("C --> Cuadrado\n");
      printf("R --> Rectángulo\n");
      printf("L --> Círculo\n");
  
      /* ingresa opciÃ³n */
      scanf("%c", &opcion);
  
      if (opcion == 'T'){
          /* si la opciÃ³n es T (triÃ¡ngulo)... */
          printf("Ingrese Base: ");
          scanf("%f", &base);
          printf("Ingrese Altura: ");
          scanf("%f", &altura);
  
          superficie = (base * altura) / 2.0;
      } else if (opcion == 'C') {
          /* si la opciÃ³n es C (Cuadrado)... */
          printf("Ingrese lado: ");
          scanf("%f", &base);
  
          superficie = base * base;
      } else if (opcion == 'R') {
          /* si la opciÃ³n es R (Rectángulo)... */
          printf("Ingrese Base: ");
          scanf("%f", &base);
          printf("Ingrese Altura: ");
          scanf("%f", &altura);
  
          superficie = (base * altura);
      } else if (opcion == 'L') {
           /* si la opciÃ³n es L (Círculo)... */
          printf("Ingrese radio: ");
          scanf("%f", &base);
  
          superficie = PI * base * base;
      } else {
           /* si la opciÃ³n es inválida... */
           printf("La opción es incorrecta\n");
      }
  
      if (superficie > 0){
          /* Si la superficie calculada es válida, muestra resultado */
          printf("La superficie es %f\n", superficie);
      }

      return 0;
  }
