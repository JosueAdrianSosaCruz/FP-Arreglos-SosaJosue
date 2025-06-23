#include<iostream>
using namespace std;

int main() {
    int n, vector[100];
    int suma_par = 0, suma_impar = 0;

    cout << "Cuantos elementos tiene el vector?: ";
    cin >> n;

    for (int i = 1; i < n+1; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vector[i];
    }

    for (int i = 1; i < n+1; i++) {
        if (i % 2 == 0) {
            suma_par += vector[i];
        } else {
            suma_impar += vector[i];
        }
    }

    cout << "Suma de indices pares: " << suma_par << endl;
    cout << "Suma de indices impares: " << suma_impar << endl;

    return 0;
}