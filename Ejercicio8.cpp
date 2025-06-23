#include <iostream>
using namespace std;

int main() {
    int numero[10];

    cout << "Ingresa un numero de 10 cifras (una cifra a la vez):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Cifra " << i + 1 << ": ";
        cin >> numero[i];
    }

    bool esCapicua = true;
    for (int i = 0; i < 5; i++) {
        if (numero[i] != numero[9 - i]) {
            esCapicua = false;
            break;
        }
    }

    if (esCapicua)
        cout << "El numero es capicua." << endl;
    else
        cout << "El numero no es capicua." << endl;

    return 0;
}