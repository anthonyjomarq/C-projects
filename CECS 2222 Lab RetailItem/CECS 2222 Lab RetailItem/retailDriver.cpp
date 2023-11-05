#include "RetailItem.h"
#include<iostream>
#include<string>
using namespace::std;

int main()
{
	RetailItem jacket("Jacket", 12, 59.95);
	RetailItem jeans("Designer Jeans", 40, 34.95);
	RetailItem shirt("Shirt", 20, 24.95);
	cout << "Item#1" << endl;
	jacket.display();
	cout << "Item#2" << endl;
	jeans.display();
	cout << "Item#3" << endl;
	shirt.display();
	return 0;
}
