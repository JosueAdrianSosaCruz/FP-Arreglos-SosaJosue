#include <iostream>
using namespace std;

void mistrcpy(char str1[], const char str2[]) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main() {
    char origen[100], destino[100];

    cout << "Ingresa una cadena: ";
    cin.getline(origen, 100);

    mistrcpy(destino, origen);

    cout << "Cadena copiada: " << destino << endl;

    return 0;
}