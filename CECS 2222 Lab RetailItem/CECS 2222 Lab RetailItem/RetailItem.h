#pragma once
#include<string>
using namespace::std;
class RetailItem
{
private:
	string description;
	int unitsOnHand;
	double price;
public:
	//CONSTRUCTORS
	RetailItem(); //DEFAULT CONSTRUCTOR
	RetailItem(string desc, int unitsOnHand, double price); //BASIC CONSTRUCTOR
	~RetailItem(); //DESTRUCTOR
	//GETTERS
	string getDesc() const;
	int getUnitsOnHand() const;
	double getPrice() const;
	//SETTERS
	void setDesc(string desc);
	void setUnitsOnHand(int unitsOnHand);
	void setPrice(double price);
	//UTILS
	void display();
};

/*Item#1
Description : Jacket
UnitsOnHand : 12
Item Price  : 59.95
Item#2
Description : Designer Jeans
UnitsOnHand : 40
Item Price  : 34.95
Item#3
Description : Shirt
UnitsOnHand : 20
Item Price  : 24.95

C:\Users\antho\source\repos\CECS 2222 Lab RetailItem\Debug\CECS 2222 Lab RetailItem.exe (process 3340) exited with code 0.
Press any key to close this window . . .
*/
