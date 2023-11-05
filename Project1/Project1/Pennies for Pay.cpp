#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	int dayWorked, count;
	float salary, total;
	do {
		cout << "Entre el numero de dias trabajados:";
		cin >> dayWorked;
		if (dayWorked < 1) {
			cout << "Error, los dias trabajados no pueden ser menores que uno\n";
		}
	} while (dayWorked < 1);
	count = 1;
	salary = 1;
	total = 1;
	cout << "Dia trabajando     Salario\n";
	cout << "-------------------------------\n";
	cout << right << setw(8) << count << setw(15) << count << endl;
	while (count < dayWorked) {
		salary = salary * 2;
		count++;
		cout << right << setw(8) <<count  << setw(15) << salary << endl;
		total = total + salary;
		// count = count + 1;
	}
	cout << "-------------------------------\n";
	cout << "El total es: " << total / 100 << endl;
	system("pause");
	return 0;
}
/*Entre el numero de dias trabajados:0
Error, los dias trabajados no pueden ser menores que uno
Entre el numero de dias trabajados:-5
Error, los dias trabajados no pueden ser menores que uno
Entre el numero de dias trabajados:5
Dia trabajando     Salario
-------------------------------
       1              1
       2              2
       3              4
       4              8
       5             16
-------------------------------
El total es: 0.31
Press any key to continue . . .*/