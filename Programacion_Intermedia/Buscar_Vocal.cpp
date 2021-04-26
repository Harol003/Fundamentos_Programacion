#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
int filtrar(int i) {
    if(i != -1) {
        return i;
    }
    return 45000;
}
int main() {
    int a, e, i, o, u;
    string palabra, aux;
    cout << "Ingrese una palabra a evaluar: ";
    getline(cin >> ws, aux);
    for(int ind = 0; ind < aux.length(); ind++) {
        palabra.push_back(tolower(aux[ind]));
    }
    a = filtrar(palabra.find('a'));
    e = filtrar(palabra.find('e'));
    i = filtrar(palabra.find('i'));
    o = filtrar(palabra.find('o'));
    u = filtrar(palabra.find('u'));
    int vocal = min(a, min(e, min(i, min(o, u))));
    cout << "\nLa primera vocal es: " << palabra[vocal] << endl;
    cout << "Su indice es: " << vocal << endl;
    return 0;
}