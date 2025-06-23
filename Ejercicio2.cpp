#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    
    cout << "Escribe una frase: ";
    getline(cin, texto);

    string palabra = "";

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] != ' ') {
            palabra += texto[i];
        } else {
            if (palabra != "") {
                cout << palabra << endl;
                palabra = "";
            }
        }
    }
    if (palabra != "") {
        cout << palabra << endl;
    }

    return 0;
}