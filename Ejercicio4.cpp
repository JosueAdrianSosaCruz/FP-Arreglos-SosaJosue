#include <iostream>
using namespace std;

int main() {
    string nombres[100];
    int n;

    cout << "Cantidad de nombres: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nombres[j] > nombres[j + 1]) {
                string temp = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = temp;
            }
        }
    }

    cout << "\nNombres ordenados:\n";
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}