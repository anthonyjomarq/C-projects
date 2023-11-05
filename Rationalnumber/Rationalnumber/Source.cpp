#include<iostream>
#include <string>
using namespace::std;
#include "RationalNumber.h"
int menu();

int main() {
	RationalNumber fraction1, fraction2;
	bool continuar = true;
	while (continuar) {
		cout << "Entre la primera fraccion:" << endl;
		cin >> fraction1;
		cout << "Entre la segunda fraccion:" << endl;
		cin >> fraction2;
		switch (menu()) {
			//Asignar
		case 1:
			fraction1 = fraction2;
			cout << fraction1;
			cout << fraction2;
			break;
			//Sumar
		case 2:
			cout << fraction1 + fraction2;
			break;
			//Restar
		case 3:
			cout << fraction1 - fraction2;
			break;
			//Dividir
		case 4:
			cout << fraction1 / fraction2;
			break;
			//Multiplicar
		case 5:
			cout << fraction1 * fraction2;
			break;
			//Operadores Relaciones
			// Comparar
		case 6:
			cout << (fraction1 < fraction2);
			break;
		case 7:
			cout << (fraction1 > fraction2);
			break;
		case 8:
			cout << (fraction1 == fraction2);
			break;
		case 9:
			cout << (fraction1 != fraction2);
			break;
			//Operadores de input/output
		case 10:
			cout << fraction1;
			cin >> fraction1;
			cout << fraction1;
			break;
			//Operadores Unitarios
		case 11:
			cout << ++fraction1;
			cout << fraction1;
			break;
		case 12:
			cout << fraction1++;
			cout << fraction1;
			break;
		case 13:
			cout << --fraction1;
			cout << fraction1;
			break;
		case 14:
			cout << fraction1--;
			cout << fraction1;
			break;
			break;
		case 15:
			cout << "GCD fracion 1: " << fraction1.GCD() << endl;
			cout << "GCD fracion 2: " << fraction2.GCD() << endl;
			break;
		case 16:
			cout << "\nGoodbye...\n";
			continuar = false;
			break;
		default:
			cout << "\nERROR! Wrong option selected! Try again.\n";
		}
		cout << endl;
	}//End main
}

int menu() {
	int input;
	cout << "Select one of the following options:\n";
	cout << "[1] = Asignar segunda fraccion a la primera." << endl;
	cout << "[2] + Sumar las fracciones." << endl;
	cout << "[3] - Restar las fracciones." << endl;
	cout << "[4] / Dividir las fracciones." << endl;
	cout << "[5] * Multiplicar las fracciones." << endl;
	cout << "[6] < Menor que" << endl;
	cout << "[7] > Mayor que" << endl;
	cout << "[8] == Igual a" << endl;
	cout << "[9] != Desigual a" << endl;
	cout << "[10] << >> Input/Output" << endl;
	cout << "[11] ++i Incremento prefijo" << endl;
	cout << "[12] i++Incremento posfijo" << endl;
	cout << "[13] --i Decremento prefijo" << endl;
	cout << "[14] i-- Decremento posfijo" << endl;
	cout << "[15] Find Greatest Common Divisor" << endl;
	cout << "[16] SALIDA" << endl;
	cin >> input;
	return input;
}