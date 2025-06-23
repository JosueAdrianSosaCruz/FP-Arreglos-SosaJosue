#include<iostream>
#include<string>
using namespace std;

bool balanceoCorrecto(string frase) {
    int contador = 0;

    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == '(') {
            contador++;
        } else if (frase[i] == ')') {
            contador--;
            if (contador < 0) {
                return false;
            }
        }
    }
    return contador == 0;
}

int main() {
    string frase;
    cout << "Ingresa una frase con parentesis: ";
    getline(cin, frase);
    if (balanceoCorrecto(frase)) {
        cout << "El balanceo de parentesis es CORRECTO." << endl;
    } else {
        cout << "El balanceo de parentesis es INCORRECTO." << endl;
    }

    return 0;
}