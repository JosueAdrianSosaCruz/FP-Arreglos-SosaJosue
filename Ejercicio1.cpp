#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto = "caceres patrimonio de la humanidad";

    bool nuevaPalabra = true;
    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == ' ') {
            nuevaPalabra = true;
        } else if (nuevaPalabra) {
            if (texto[i] >= 'a' && texto[i] <= 'z')
                texto[i] = texto[i] - 32;
            nuevaPalabra = false;
        }
    }

    cout << texto << endl;

    return 0;
}