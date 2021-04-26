//CIDE 
//Profesor HHTN
//Estructura Sintaxis While
// Programa que solo sale del While cuando se da un numero mayor a 100
#include "iostream"
using namespace std;
int main()
{
    int numero;
    cout <<  "Ingrese un numero ";
    cin >> numero;
    while(numero <= 100)
    {
        cout <<  "Ingrese un numero ";
        cin >> numero;
    }
    system("PAUSE");
    return 0;
}