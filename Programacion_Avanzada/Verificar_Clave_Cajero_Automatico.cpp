#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string passwd, binds; char ch;
    long int acert = 0, pos, digit;
    cout << "Ingrese la contraseña, por favor: ";
    getline(cin >> ws, passwd);
    pos = passwd.length();
    for(long ind = 0; ind < pos; ind++) {
       if(pos >= 4) {
         ch = passwd[ind];
         if(isdigit(ch)) {
            binds = passwd[ind];
            digit = stol(binds);
            if((digit % 2 == 0) && (ind == 3) || (ind == 4)) {
               acert++;
            }
         } else {
           cout << "Su clave contiene caracteres \n";
           exit(0);
         }
       } else {
         cout << "La clave debe contener 4 o mas digitos!!" << endl;
         exit(0);
       }
    }
    if(acert == 2) {
      cout << "Bienvenido a la plataforma del banco!!" << endl;
    } else {
      cout << "Lo sentimos, contraseña incorrecta!!" << endl;
    }
    return 0;
}