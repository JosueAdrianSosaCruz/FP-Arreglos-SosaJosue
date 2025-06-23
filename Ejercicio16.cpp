#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main() {
    string linea, soloDigitos = "";
    int n;

    cout << "Ingresa una linea de texto: ";
    getline(cin, linea);

    for (int i = 0; i < linea.length(); i++) {
        if (isdigit(linea[i])) {
            soloDigitos += linea[i];
        }
    }

    n = atoi(soloDigitos.c_str());
    n += 2;

    cout << "Numero resultante: " << n << endl;

    return 0;
}