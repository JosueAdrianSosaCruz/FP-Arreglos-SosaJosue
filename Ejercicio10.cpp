#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    int nums[30];
    int suma = 0;

    for (int i = 0; i < 30; i++) {
        nums[i] = rand() % 901 + 100;
        suma += nums[i];
    }

    cout << "Numeros generados: ";
    for (int i = 0; i < 30; i++) {
        cout << nums[i] << " ";
    }
    cout << " ";

    float media = suma / 30.0;

    sort(nums, nums + 30);
    float mediana = (nums[14] + nums[15]) / 2.0;

    int moda = nums[0], maxRep = 1;
    for (int i = 0; i < 30; i++) {
        int rep = 1;
        for (int j = i + 1; j < 30; j++) {
            if (nums[j] == nums[i]) rep++;
        }
        if (rep > maxRep) {
            maxRep = rep;
            moda = nums[i];
        }
    }

    cout << "Media: " << media << endl;
    cout << "Mediana: " << mediana << endl;
    if (maxRep == 1)
        cout << "Moda: No hay (todos diferentes)" << endl;
    else
        cout << "Moda: " << moda << " (repite " << maxRep << " veces)" << endl;

    return 0;
}