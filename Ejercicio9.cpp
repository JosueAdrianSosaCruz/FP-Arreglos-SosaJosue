#include<iostream>
using namespace std;

int main() {
    int vector[100], n;

    cout << "Cuantos elementos tiene el vector? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    int ultimo = vector[n - 1];

    for (int i = n - 1; i > 0; i--) {
        vector[i] = vector[i - 1];
    }

    vector[0] = ultimo;

    cout << "\nVector rotado a la derecha:\n";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }

    cout << endl;
    return 0;
}