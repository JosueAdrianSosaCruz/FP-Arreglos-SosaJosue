#include<iostream>
using namespace std;

int main() {
    int arreglo[100], n;
    int suma_positivos = 0, suma_negativos = 0;

    cout << "Cuantos elementos tiene el arreglo? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];

        if (arreglo[i] > 0)
            suma_positivos += arreglo[i];
        else if (arreglo[i] < 0)
            suma_negativos += arreglo[i];
    }

    cout << "Suma de positivos: " << suma_positivos << endl;
    cout << "Suma de negativos: " << suma_negativos << endl;

    return 0;
}