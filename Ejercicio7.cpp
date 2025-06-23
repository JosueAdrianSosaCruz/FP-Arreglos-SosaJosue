#include<iostream>
using namespace std;

int main() {
    int n, vector[100];

    cout << "Cuantos elementos tiene el vector? ";
    cin >> n;

    for (int i = 1; i < n+1; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vector[i];
    }

    cout << "Vector invertido: ";
    for (int i = n; i >= 1; i--) {
        cout << vector[i] << " ";
    }

    cout << endl;
    return 0;
}