#include<iostream>
using namespace std;

void mistrcat(char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    char str1[200];
    char str2[100];

    cout << "Ingresa la primera cadena: ";
    cin.getline(str1, 200);

    cout << "Ingresa la segunda cadena: ";
    cin.getline(str2, 100);

    mistrcat(str1, str2);

    cout << "Cadena resultante: " << str1 << endl;

    return 0;
}