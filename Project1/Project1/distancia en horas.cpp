#include <iostream>
#include <iomanip>
using namespace::std;
int main() {
	float speed;
	int hours;
	int i;

	cout << "Entre la velocidad del vehiculo en millas por hora:";
	cin >> speed;
	while (speed <= 0) {
		cout << "Error, la velocidad no puede ser negativa.\n";
		cout << "Entre la velocidad del vehiculo en millas por hora:";
		cin >> speed;
	}
	do {
		cout << "Entre la cantidad de horas que el viajo:";
		cin >> hours;
		if (hours < 1) {
			cout << "Error, el tiempo no puede ser menor que uno.\n";
		}
	} while (hours < 1);
	cout << "Hour   Distance Traveled\n";
	cout << "    ---------------------------------\n";
	i = 1;
	while (i <= hours) {
		cout << right << setw(8) << i << setw(8) << speed * i << endl;
		i++;
	}
	system("pause");
	return 0;
}
