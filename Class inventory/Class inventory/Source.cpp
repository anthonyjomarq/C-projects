#include <iostream>
#include "inventory.h"
using namespace::std;

int main() {
	int itemNumber, quantity;
	double cost;
	do {
		cout << "Enter Item number: #";
		cin >> itemNumber;
		if (itemNumber < 0)
			cout << "Error, you cannot enter negative numbers!" << endl;
	} while (itemNumber < 0);
	do {
		cout << "Enter quantity of the item: ";
		cin >> quantity;
		if (quantity < 0)
			cout << "Error, you cannot enter negative numbers!" << endl;
	} while (quantity < 0);
	do {
		cout << "Enter cost of the item: ";
		cin >> cost;
		if (cost < 0)
			cout << "Error, you cannot enter negative numbers!" << endl;
	} while (cost < 0);
	Inventory a(itemNumber, quantity, cost);
	cout << "The inventory total is $" << a.getTotalCost() << endl;
	return 0;
}