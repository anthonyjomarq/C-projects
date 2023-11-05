#include <iostream>

using namespace std;

const int SIZE = 5;

int main() {


    int pruebas[SIZE];

    cout << "Inserte los valores del arreglo" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Dia " << i+1 << ": ";
        cin >> pruebas[i];  
    }

    cout << "Los valores entrados son: " << endl;

    for (int i = 0; i < SIZE; i++) 
    {
        cout << "Dia " << i + 1 << ": ";
        cout << pruebas[i] << endl;
    }

    return 0;
}