#pragma once
#include "Car.h"
#include <iostream>
using namespace::std;
class Dealership {
private:
	string name;
	Car** inventory;
	int carCount;
	int brandCount;
	//int modelCount; -removed not useful in this lab exercise 
	void setBrandCount(string);
	string strToUpper(string);
public:
	Dealership();
	Dealership(string);
	~Dealership();
	void setName(string);
	void addCarToInventory(string, string);
	void sellCar(string, string);
	int getCarCount() const;
	int getModelCount(string) const;
	void orderInventory();
	void printSummaryInventory() const;
	void printDetailedInventory() const;
};

