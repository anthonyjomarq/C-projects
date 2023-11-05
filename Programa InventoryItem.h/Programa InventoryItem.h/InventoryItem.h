#pragma once

//Specification file for the InventoryItem class.
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <cstring.h> // Needed for strlen and strcpy

//InventoryItem class declaration. 
class InventoryItem
{
private:
	char* description;
	double cost;
	int units;
public:
	//Constructor
	InventoryItem(char* desc, double c, int u)
	{ // Allocate just enough memory for the description. 
		description = new char[strlen(desc) + 1];

		// Copu the description to the allocated memory. 
		strcpy(description, desc);

		//Asign values to cost and units. 
		cost = c;
		units = u;
	}
	//Destructor
	~InventoryItem()
	{
		delete[] description;
	}
	const char* getDescription() const
	{
		return description;
	}
	double getCost() const
	{
		return cost;
	}
	int getUnits() const
	{
		return units;
	};

};
#endif