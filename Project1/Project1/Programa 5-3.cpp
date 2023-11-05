
// This program demonstrates a simple while loop. 
#include <iostream>
using namespace std;


int main()
{
	int number = 0;
	int n;

	/* cout << "Enter the amount of times you wish you to see the message:";
	cin >> n;
	while (number <= n)
	{
		cout << "Hello\n";
		number++;
	}
	cout << "That's all!\n";*/

	/*cout << " Entre la cantidad de veces a imprimir el mensaje: ";
	cin >> n;
	number = n;
	while (number > 0)
	{
		cout << "Hello\n";
		number--;
	}
	cout << "That's all!\n"; */

	/*cout << " Entre la cantidad de veces a imprimir el mensaje: ";
	cin >> n;
	do {

			cout << "Hello\n";
			number++;

	} while (number < n);*/

    /*cout << " Entre la cantidad de veces a imprimir el mensaje: ";
	cin >> n;
	number = n;
    do 
	{
		cout << "Hello\n";
		number--;
	}while (number > 0); */

	/*int i;

	cout << " Entre la cantidad de veces a imprimir el mensaje: ";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Hello\n";
	}
	cout << "That's all!\n";*/

	int i;

	cout << " Entre la cantidad de veces a imprimir el mensaje: ";
	cin >> n;
	for (i = n; i > n; i--) {
		cout << "Hello\n";
	}
	cout << "That's all!\n";
	system("pause");
	return 0;
}
