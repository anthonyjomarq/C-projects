#include <iostream>
#include <iomanip>
using namespace::std;
int main() {
	float total;
	int males, women;
	double percentage1, percentage2;
	do {
		cout << "How many women are in the class? ";
		cin >> women;
		if (women <= 0) {
			cout << "Error, the number of women can not be 0 or negative!\n";
		}
	} while (women <= 0);
	do {
		cout << "How many males are in the class? ";
		cin >> males;
		if (males <= 0) {
			cout << "Error, the number of males can not be 0 or negative!\n";

		}
	} while (males <= 0);
	total = women + males;
	percentage1 = women / total * 100.0;
	percentage2 = males / total * 100.0;
	cout << "\nThe percentage of males in the class is " << percentage2 << "%.\n";
	cout << "The percentage of women in the class is " << percentage1 << "%.\n";
	system("pause");
	return 0;
}
/*How many women are in the class? 24
How many males are in the class? -67
Error, the amount of males can not be 0 or negative!
How many males are in the class? 12

The percentage of males in the class is 33.3333%.
The percentage of women in the class is 66.6667%.
Press any key to continue . . .*/

/*How many women are in the class? 0
Error, the amount of women can not be 0 or negative!
How many women are in the class? 24
How many males are in the class? 12

The percentage of males in the class is 33.3333%.
The percentage of women in the class is 66.6667%.
Press any key to continue . . .*/