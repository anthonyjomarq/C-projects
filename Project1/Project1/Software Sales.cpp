#include <iostream>
#include <iomanip>
using namespace ::std;

int main() {
	float unit, price;

	cout << "How many units were sold? ";
	cin >> unit;
	if (unit > 0) {
		if (unit >= 10 && unit <= 19) {
			price = (unit * 99) - (unit * 99 * .20);
			cout << setprecision(2) << fixed << showpoint;
			cout << "The price of the item is $" << price << endl;
		}
		if (unit >= 20 && unit <= 49) {
			price = (unit * 99) - (unit * 99 * .30);
			cout << setprecision(2) << fixed << showpoint;
			cout << "The price of the item is $" << price << endl;
		}
		if (unit >= 50 && unit <= 98) {
			price = (unit * 99) - (unit * 99 * .50);
			cout << setprecision(2) << fixed << showpoint;
			cout << "The price of the item is $" << price << endl;
		}
	}
	else {
		cout << "Error the units must be greater than 0";
	}
	system("pause");
	return 0;
}
/*How many units were sold? 10
The price of the item is $792.00
Press any key to continue . . .*/

/*How many units were sold? 23
The price of the item is $1593.90
Press any key to continue . . .*/

/*How many units were sold? 50
The price of the item is $2475.00
Press any key to continue . . .*/