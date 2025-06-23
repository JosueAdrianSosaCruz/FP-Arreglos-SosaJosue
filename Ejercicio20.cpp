#include<iostream>
#include<string>
using namespace std;

int main() {
    const int MESES = 12;
    float ventas[MESES], suma = 0, promedio;
    string nombresMeses[MESES] = {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };
    cout << "Ingrese las ventas mensuales del ano 2020:\n";
    for (int i = 0; i < MESES; i++) {
        cout << nombresMeses[i] << ": ";
        cin >> ventas[i];
        suma += ventas[i];
    }
    promedio = suma / MESES;
    cout << "Promedio mensual de ventas: " << promedio << endl;

    int minimo = 0, regular = 0, excelente = 0;

    cout << "\nMeses con ventas EXCELENTES:\n";
    for (int i = 0; i < MESES; i++) {
        float porcentaje = ventas[i] * 100 / promedio;

        if (porcentaje < 40)
            minimo++;
        else if (porcentaje <= 75)
            regular++;
        else {
            excelente++;
            cout << "- " << nombresMeses[i] << endl;
        }
    }

    cout << "\nResumen:\n";
    cout << "Meses Minimo   (< 40%): " << (minimo * 100.0 / MESES) << "%\n";
    cout << "Meses Regular  (40-75%): " << (regular * 100.0 / MESES) << "%\n";
    cout << "Meses Excelente(> 75%): " << (excelente * 100.0 / MESES) << "%\n";

    return 0;
}