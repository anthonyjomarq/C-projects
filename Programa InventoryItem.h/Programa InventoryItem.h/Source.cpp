// This program demonstrates a class with a destructor.
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
	//Define an InvetoryItem object with the following data:
	//Description: Wrench Cost: 8.75   Units on hand: 20
	InventoryItem stock("Wrench", 8.75, 20);

	//Set numeric output formatting.
	cout << setprecision(2) << fixed << showpoint;

	//Display the object's data.
	cout << "Item Description: " << stock.getDescription() << endl;
	cout << "Cost: $" << stock.getCost() << endl;
	cout << "Units on hands: " << stock.getUnits() << endl;
	return 0;
}
