#include <iostream>
using namespace::std;

int main() {
	char choice;
	const int MODELTV300 = 'c';
	const int MODELTV200 = 'b';
	const int MODELTV100 = 'a';

	cout << "Menu Modelos de TV's existentes en inventario" << endl;
	cout << "a. Modelo 100";
	cout << "b. Modelo 200";
	cout << "c. Modelo 300";
	cout << "Entre la opcion: ";
	cin >> choice;
	if (choice == MODELTV300) {
		cout << "Picture-in-a-picture.\n";
		cout << "Stereo sound.\n";
		cout << "Remote control.\n";
	}
	else {
		if (choice == MODELTV200) {
			cout << "Stereo sound.\n";
			cout << "Remote control.\n";
		}
		else {
			if (choice == MODELTV100) {
				cout << "Remote control.\n";
			}
			else {
				cout << "Error, el modelo no está en existencia\n";
			}

		}

	}
	system("pause");
	return 0;
}