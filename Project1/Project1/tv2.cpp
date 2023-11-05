#include <iostream>
using namespace::std;

int main() {
	int choice;
	const int MODELTV300 = 3;
	const int MODELTV200 = 2;
	const int MODELTV100 = 1;

	cout << "Menu Modelos de TV's existentes en inventario" << endl;
	cout << "1. Modelo 100" << endl;
	cout << "2. Modelo 200" << endl;
	cout << "3. Modelo 300" << endl;
	cout << "4. Salida" << endl;
	cout << "Entre la opcion: ";
	cin >> choice;

	switch (choice) {
	case 1: 
		cout << "Remote control." << endl;
		break;
	case 2: 
		cout << "Stereo sound. " << endl;
		cout << "Remote control." << endl;
		break;
	case 3:
		cout << "Picture-in-a-picture." << endl;
		cout << "Stereo sound." << endl;
		cout << "Remote control." << endl;
		break;
	case 4: 
		cout << "bye...";
		break;
	default:
		cout << "Error, el modelo no está en existencia\n";
		break;
    }
	system("pause");
	return 0;
}