#include<iostream>
using namespace std;

int main() {
    int n, numeros[100], mayor, menor, rep_mayor = 0, rep_menor = 0;

    cout << "Cuantos numeros vas a ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    mayor = menor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (numeros[i] == mayor) rep_mayor++;
        if (numeros[i] == menor) rep_menor++;
    }

    cout << "\nMayor numero: " << mayor << " (se repite " << rep_mayor << " veces)" << endl;
    cout << "Menor numero: " << menor << " (se repite " << rep_menor << " veces)" << endl;

    return 0;
}