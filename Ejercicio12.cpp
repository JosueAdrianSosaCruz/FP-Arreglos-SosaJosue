#include <iostream>
using namespace std;

int verificarOrden(int vec[], int n) {
    bool creciente = true;
    bool decreciente = true;

    for (int i = 1; i < n; i++) {
        if (vec[i] < vec[i - 1]) {
            creciente = false;
        }
        if (vec[i] > vec[i - 1]) {
            decreciente = false;
        }
    }

    if (creciente) return 1;
    if (decreciente) return -1;
    return 0;
}

int main() {
    int vector[100], n;

    cout << "Cuantos elementos tiene el vector?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    int resultado = verificarOrden(vector, n);

    cout << "Resultado: ";
    if (resultado == 1)
        cout << "El vector esta ordenado de forma creciente." << endl;
    else if (resultado == -1)
        cout << "El vector esta ordenado de forma decreciente." << endl;
    else
        cout << "El vector NO esta ordenado." << endl;

    return 0;
}