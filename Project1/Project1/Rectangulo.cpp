#include<iostream> 
using namespace::std;
//Programa que calcula el area y perimetro
//CECS2200 09 Anthony Colon Dominguez #108365


int main() {
	float width, length, area, perimeter;
	cout << "Entre el ancho de cuarto:";
	cin >> width;
	while (width <= 0) {
		cout << "Error, width can not be 0 or negative numbers!\n";
		cout << "Entre el ancho de cuarto:";
		cin >> width;
	}
	cout << "Entre el largo del cuarto:";
	cin >> length;
	while (length <= 0) {
		cout << "Error, length can not be 0 or negative numbers!\n";
		cout << "Entre el largo del cuarto:";
		cin >> length;
	}
	if (width > 0 && length > 0) {
		area = length * width;
		perimeter = 2 * length + 2 * width;
		cout << "\nEl area del cuarto es:" << area << endl;
		cout << "El perimetro es:" << perimeter << endl;
	}
	system("pause");
	return 0;
}

/*Entre el ancho de cuarto:18.2
Entre el largo del cuarto:25.4
El area del cuarto es:462.28
El perimetro es:87.2
Press any key to continue . . .*/