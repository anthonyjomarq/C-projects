#include "RetailItem.h"
#include<iostream>
#include<string>
using namespace::std;

//DEFAULT CONSTRUCTOR
RetailItem::RetailItem()
{
	this->description = "NO DESC";
	this->unitsOnHand = 0;
	this->price = 0.0;
}

RetailItem::RetailItem(string desc, int unitsOnHand, double price)
{
	this->description = desc;
	this->unitsOnHand = unitsOnHand;
	this->price = price;
}

RetailItem::~RetailItem()
{
	//NOTHING TO DESTROY
}

string RetailItem::getDesc() const
{
	return this->description;
}

int RetailItem::getUnitsOnHand() const
{
	return this->unitsOnHand;
}

double RetailItem::getPrice() const
{
	return this->price;
}

void RetailItem::setDesc(string desc)
{
	this->description = desc;
}

void RetailItem::setUnitsOnHand(int unitsOnHand)
{
	this->unitsOnHand = unitsOnHand;
}

void RetailItem::setPrice(double price)
{
	this->price = price;
}

void RetailItem::display()
{
	cout << "Description : " << this->getDesc() << endl;
	cout << "UnitsOnHand : " << this->getUnitsOnHand() << endl;
	cout << "Item Price  : " << this->getPrice() << endl;
}
