#include <iostream>
#include <stdlib.h>
 
using std::cout;
using std::cin;
using std::endl;
 
#define NFILAS 8
#define NCOLUMNAS 8
 
int main(int argc, char* argv[])
{
    int parqueadero[8][8]={{2,0,0,0,5,0,0,2},
                           {3,3,3,3,3,3,3,3},
                           {3,0,0,0,0,0,0,3},
                           {3,3,3,3,3,3,3,3},
                           {3,0,0,0,0,0,0,3},
                           {3,3,3,3,3,3,3,3},
                           {3,0,0,0,0,0,0,3},
                           {2,3,3,3,4,3,3,2}};
 
 
    //Obtengo el numero de plazas libres
    int fila,columna,nLibres=0,nOcupadas=0,op;
    for(fila=0;fila<NFILAS;fila++)
        for(columna=0;columna<NCOLUMNAS;columna++)
            if(parqueadero[fila][columna]== 0)
                nLibres++;
    do{
        //Solicito la operacion a realizar
        system("CLS");
        cout << "Menu: " << endl;
        cout << "1-Estacionar un vehiculo" << endl;
        cout << "2-Retirar un vehiculo" << endl;
        cout << "3-Listar estado de plazas" << endl;
        cout << "0-Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> op;
 
        bool estacionado,liberado;
 
        switch(op){
            case 0:
                break;
            case 1:
                if(nLibres > 0){
                    do{
                        estacionado = false;
                        cout << "Introduce el numero de la fila: ";
                        cin >> fila;
                        cout << "Introduce el numero de la columna: ";
                        cin >> columna;
                        switch(parqueadero[fila][columna])
                        {
                            case 0:
                                parqueadero[fila][columna]=1;
                                nLibres--;
                                nOcupadas++;
                                estacionado= true;
                                cout << "Vehiculo aparcado satisfactoriamente" << endl;
                                break;
                            case 1:
                                cout << "Plaza ya ocupada" << endl;
                                break;
                            case 2:
                                cout << "No se puede aparcar en las esquinas" << endl;
                                break;
                            case 3:
                                cout << "No se puede aparcar en los caminos de paso" << endl;
                                break;
                            case 4:
                                cout << "No se puede aparcar en las entradas" << endl;
                                break;
                            case 5:
                                cout << "No se puede aparcar en las salidas" << endl;
                                break;
                            default:
                                cout << "Valor inesperado en esa posicion" << endl;
                        }
                    }while(estacionado != true);
                }else{
                    cout << "No quedan plazas libres" << endl;
                }
                system("PAUSE");
                break;
            case 2:
                if(nOcupadas > 0){
                    do{
                        liberado = false;
                        cout << "Introduce el numero de la fila: ";
                        cin >> fila;
                        cout << "Introduce el numero de la columna: ";
                        cin >> columna;
                        if(parqueadero[fila][columna]==1){
                            parqueadero[fila][columna]=0;
                            liberado=true;
                            nLibres++;
                            nOcupadas--;
                            cout << "El vehiculo se retiró satisfactoriamente" << endl;
                        }else{
                            cout << "La posicion indicada no esta ocupada, intentelo de nuevo" << endl;
                        }
                    }while(liberado == false);
                }else{
                    cout << "No hay plazas ocupadas" << endl;
                }
                system("PAUSE");
                break;
            case 3:
                for(fila=0;fila<NFILAS;fila++)
                    for(columna=0;columna<NCOLUMNAS;columna++)
                        if(parqueadero[fila][columna]==1)
                            cout << "plaza en fila " << fila << " columna " << columna << " ocupada" << endl;
                        else if(parqueadero[fila][columna]==0)
                            cout << "plaza en fila " << fila << " columna " << columna << " libre" << endl;
                system("PAUSE");
                break;
            default:
                cout << "Opcion incorrecta, vuelva a intentarlo" << endl;
                system("PAUSE");
        }
    }while(op != 0);
    return 0;
}