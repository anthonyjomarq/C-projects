//Este codigo ayuda al usuario a registrar numero de pruebas de COVID por dia en los ultimos siete dias. 
#include <iostream>
using namespace::std;

const int SIZE = 7;
int main() {

	int pruebas[SIZE];

	cout << "Inserte los valores del arreglo: ";
	for(int i = 0; i <= SIZE; i++)
		cin >> pruebas[i];
	
	/*cin >> pruebas[0];
	cin >> pruebas[1];
	cin >> pruebas[2];
	cin >> pruebas[3];
	cin >> pruebas[4];
	cin >> pruebas[5];
	cin >> pruebas[6];*/

	cout << "Los valores entrados son: ";
	cout << pruebas[0];
	cout << pruebas[1];
	cout << pruebas[2];
	cout << pruebas[3];
	cout << pruebas[4];
	cout << pruebas[5];
	cout << pruebas[6];


}