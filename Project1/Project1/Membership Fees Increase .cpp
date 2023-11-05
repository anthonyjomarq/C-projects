#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	int years, count = 0;
	double percentage, charge, total;

	do {
		cout << "How much does your membership charge you annually? ";
		cin >> charge;
		if (charge < 0) {
			cout << "Error, the charge cannot be negative!\n";
		}
	} while (charge < 0);
	do {
		cout << "How much is the membership going to increase(%) every year? ";
		cin >> percentage;
		if (percentage < 0) {
			cout << "Error, the increase cannot be negative!\n";
		}
	} while (percentage < 0);
	do {
		cout << "For how many years? ";
		cin >> years;
		if (years < 1) {
			cout << "Error, the years entered cannot be less than 1!\n";
		}
	} while (years < 1 );
	cout << "Proyected rates\n";
	cout << "year     charge\n";
	cout << "---------------";
	do {
		cout << fixed << showpoint << setprecision(2) << endl;
		count++;
		total = ((charge)*percentage / 100.0) + charge;
		cout << setw(2) << count << "       " << total << endl;
		percentage += percentage;
	} while (count < years);
	system("pause");
	return 0;
}
/*How much does your membership charge you annually? -2500
Error, the charge cannot be negative!
How much does your membership charge you annually? 2500
How much is the membership going to increase(%) every year? -4
Error, the increase cannot be negative!
How much is the membership going to increase(%) every year? 4
For how many years? -6
Error, the years entered cannot be less than 1!
For how many years? 6
Proyected rates
year     charge
---------------

 1     2600.00

 2     2700.00

 3     2900.00

 4     3300.00

 5     4100.00

 6     5700.00
Press any key to continue . . .*/