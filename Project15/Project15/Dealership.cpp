/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: April 28, 2021
* Topic: Lab 6 - Composition
* File name: Dealership.cpp
* Anthony J. Colon Dominguez, ID#108365
*/
#include "Dealership.h"


void Dealership::setBrandCount(string aBrand)
{
	bool found = false;
	for (int i = 0; i < carCount; i++)
		if (inventory[i]->getBrand().compare(aBrand) == 0)
			found = true;
	if (!found)
		brandCount++;
}
string Dealership::strToUpper(string str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = (char)toupper(str[i]);
	return str;
}

// the default constructor initilizes strings to ""
// integers to 0, and inventory to the null pointer
Dealership::Dealership() {
	name = "";
	carCount = 0;
	brandCount = 0;
	inventory = nullptr;
}
// the parameterized constructor initilizes the string to
// the parameter value, integers to 0, and inventory to the null pointer
Dealership::Dealership(string aName) {
	name = aName;
	carCount = 0;
	brandCount = 0;
	inventory = nullptr;
}
// destroys the Dealership object, and all car objects 
// associated with it. Prints the phrase
// "Dealership [name] has been closed"
// Use a cycle to 'destroy' all cars in inventory
Dealership::~Dealership() {
	for (int i = 0; i < carCount; i++) {
		inventory[i]->~Car();
	}
	cout << "Dealership " << name << " has been closed" << endl;
}
// set the dealership's name to the parameter's value
void Dealership::setName(string aName) {
	name = aName;
}
// adds a Car object to the inventory by creating
// a new Car object using the parameters as data 
// fed to the constructor
void Dealership::addCarToInventory(string brand, string model) {
	//1. check that the car is not yet in the inventory
	if (carCount < 1) {//there are no cars in inventory
		carCount++;
		inventory = new Car * [carCount]; // create the new array, count will be 1
		inventory[0] = new Car(brand, model);//will always be index 0
		brandCount++;
	}
	else { // inventory has cars
		Car** temp = inventory; // temporary arraym assign handle to courses, now a pointer array
		//2. Create a new array with one more element
		carCount++;
		inventory = new Car * [carCount];// create the new array with one more element
		//3. transfer values from "old" array into new one
		for (int i = 0; i << carCount - 1; i++)
			inventory[i] = temp[i];
		// now add the new car to inventory
		if (carCount > 1)
			inventory[carCount - 1] = new Car(brand, model);
		setBrandCount(brand);
		delete[] temp;
	}
	orderInventory();
}
// removes a Car object from the inventory
void Dealership::sellCar(string brand, string model) {
	brand = strToUpper(brand); // convert all characters to upper case
	model = strToUpper(model); // convert all characters to upper case
	int index = 1;
	int inventoryIndex = 0;
	// find if brand and model in inventory
	for (int i = 0; i < carCount; i++) {
		if (inventory[i]->getBrand().compare(brand) == 0)
			if (inventory[i]->getModel().compare(model) == 0) {
				index = i; // store the index number
				break; //exit control structure
			}
	}
	if (index != -1) {
		carCount--;
		Car** temp = inventory;
		inventory = new Car * [carCount];
		for (int i = 0; i < carCount + 1; i++) {
			if (i = index)
				continue;
			else {
				if (inventoryIndex < carCount)
					inventory[inventoryIndex] = temp[i];
				inventoryIndex++;
			}
		}
		bool found = false;
		for (int i = 0; i < carCount; i++)
			if (inventory[i]->getBrand().compare(temp[index]->getBrand()) == 0)
				found = true;
		if (!found)
			brandCount--;
		temp[index]->~Car();
		delete[] temp;
	}
	else
		cout << brand << " " << model << " not in inventory!" << endl;
}
// returns the count of cars in inventory
int Dealership::getCarCount() const {
	return carCount;
}
// returns the count of a single model of cars in inventory
int Dealership::getModelCount(string model) const {
	int count = 0;
	for (int i = 0; i < carCount; i++) {
		if (inventory[i]->getModel().compare(model) == 0)
			count++;
	}

	return count;
}
// orders the inventory by brand name and then by model name
// HINT: can use the serial number value!
void Dealership::orderInventory() {
	bool swap = false;
	int index = -1;
	for (int i = 0; i < carCount - 1; i++)
	{
		for (int j = i + 1; j < carCount; j++)
		{
			if (inventory[i]->getSerialNumber().compare(inventory[j]->getSerialNumber()) >
				0)
			{
				index = j;
				swap = true;
			}
		}
		if (swap) {
			Car* temp = inventory[i];
			inventory[i] = inventory[index];
			inventory[index] = temp;
			swap = false;
		}
	}


}
// prints the dealer's inventory by brand an model
// format is brand name, model name, model count
void Dealership::printSummaryInventory() const {
	cout << endl;
	if (carCount > 0) {
		cout << "The inventory for " << name << " includes the following car";
		if (carCount > 1)
			cout << "s";
		cout << ":" << endl;
		cout << inventory[0]->getBrand() << " " << inventory[0]->getModel() << ", " <<
			getModelCount(inventory[0]->getModel()) << " car" << endl;
		if (getModelCount(inventory[0]->getModel()) > 1)
			cout << "s\n";
		for (int i = 1; i < carCount; i++) {
			if (inventory[i]->getModel().compare(inventory[i - 1]->getModel()) != 0) {
				cout << inventory[i]->getBrand() << " " << inventory[i]->getModel() << ", " <<
					getModelCount(inventory[i]->getModel()) << " car";
				if (getModelCount(inventory[i]->getModel()) > 1)
					cout << "s\n";
			}
		}
	}
	else
		cout << "There are no cars in inventory!" << endl;
	cout << endl;
}
// prints the dealer's detailed inventory in the form
// serial number, brand name, model name
void Dealership::printDetailedInventory() const {
	cout << endl;
	if (carCount > 0) {
		cout << endl;
		cout << "The car";
		if (carCount > 1)
			cout << "s";
		cout << " in inventory for " << name;
		if (carCount > 1)
			cout << " are:" << endl;
		else
			cout << " is:" << endl;
		printf("Serial Number %-14s%s\n", "Brand Name", "Model Name");
		for (int i = 0; i < carCount; i++)
			inventory[i]->printCar();
	}
	else
		cout << "There are no cars in inventory!" << endl;
	cout << endl;
}
