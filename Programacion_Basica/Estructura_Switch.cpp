//CIDE 
//Profesor HHTN
//Estructura Switch
# include "iostream"
using namespace std;
int main()
{
    cout << "Ingrese la Opcion a ejecutar: ";
    int opcion = 0;
    cin >> opcion;
    switch(opcion)
    {
        case 1: cout << "Usted ha seleccionado la opcion 1";
        break;
        case 2: cout << "Usted ha seleccionado la opcion 2";
        break;
        case 3: cout << "Usted ha seleccionado la opcion 3";
        break;
        default: cout << "Usted ha ingresado una opcion incorrecta";
    }
    system("PAUSE"); //Solo ponla si no te da error
    return 0;
}