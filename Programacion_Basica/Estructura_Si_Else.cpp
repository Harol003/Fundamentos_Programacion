//CIDE 
//Profesor HHTN
//Estructura Si Else
#include "iostream"
#include "string"
#include "stdlib.h"
using namespace std;
int main()
{
    string password = "";
    cout << "Humano Ingrese Password de Acceso: ";
    cin >> password;
    if(password == "Cide")
    {
        cout << "Password correcto. Bienvenido Humano";
    }
    else
    {
        cout << "Password incorrecto. Violacion de acceso se reportara al administrador";
    }
    system("PAUSE"); //Solo ponla si no te da error
    return 0;
}