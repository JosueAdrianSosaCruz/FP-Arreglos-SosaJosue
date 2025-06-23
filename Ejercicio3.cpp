#include<iostream>
#include<string>
using namespace std;

int main() {
    string texto;
    char letra;
    int contador = 0;

    cout << "Escribe una frase: ";
    getline(cin, texto);

    cout << "Ingresa la letra que quieres contar: ";
    cin >> letra;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            contador++;
        }
    }

    cout << "La letra '" << letra << "' aparece " << contador << " veces." << endl;

    return 0;
}