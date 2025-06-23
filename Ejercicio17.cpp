#include<iostream>
#include<string>
using namespace std;

bool contieneApellido(string nombreCompleto, string apellido) {
    if (nombreCompleto.find(apellido) != string::npos) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string nombre, apellido;

    cout << "Ingresa el nombre completo: ";
    getline(cin, nombre);
    cout << "Ingresa el apellido a verificar: ";
    getline(cin, apellido);
    if (contieneApellido(nombre, apellido)) {
        cout << "El apellido pertenece a la persona." << endl;
    } else {
        cout << "El apellido no pertenece a la persona." << endl;
    }

    return 0;
}