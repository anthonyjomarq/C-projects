#include <iostream>
using namespace::std;

int main() {
	double num,
		product;
	const int Max = 100;

	cout << "Enter the number: ";
	cin >> num;
	while (num < 0 || num > 1) {
		cout << "Error fuera del intervalo de [0,1].\n";
		cout << "Enter the number: ";
		cin >> num;
	}
	product = 1;
	while (product < Max) {
		product = num * 10.0;
		cout << "\n" << product << endl;
		num = product;
	}
	cout << "Product: " << product << endl;
	system("pause");
	return 0;
}
/*Enter the number: -4
Error fuera del intervalo de [0,1].
Enter the number: 2
Error fuera del intervalo de [0,1].
Enter the number: 0.2

2

20

200
Product: 200
Press any key to continue . . .*/
