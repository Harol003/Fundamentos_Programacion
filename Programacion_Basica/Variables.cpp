//CIDE 
//Profesor HHTN
//Variables
#include <iostream>
using namespace std;
int main()
{
    cout<<"\n Programa que imprime variables";
    char x = 'a'; // Declaramos y asignamos en la misma l�nea
    cout<<"\n Imprime variable char:"<<x;
    int num; //Declaramos el entero en una l�nea
    cout<<"\n Imprime variable Entero:"<<num;
    num = 5; //Le asignamos un valor en otra l�nea
    int num2 = 8; //Asignacion y declaracion al tiempo
    float numero; //Un numero decimal
    cout<<"\n Imprime variable Float:"<<numero;
    numero = 3.5; //Le asignamos un valor al decimal
    float res = numero + num2; //Sumamos dos variables y las asignamos a res    //3.5 + 8 = 11.5
    res = res + num; //Al valor actual de res le sumamos el valor de num    //11.5 + 5 = 16.5
    bool valor = false; //Variable booleana
    valor = true; // Pueden ser true o false
    cout<<"\n Imprime variable Bool:"<<valor;
    res = res *2; //Duplicamos el valor de res 16.5*2 = 33
    cout<<"\n Imprime resultado de la operacion:"<<res;
    cout << res << endl; //Mostramos el valor de res por pantalla
    return 0;
}
