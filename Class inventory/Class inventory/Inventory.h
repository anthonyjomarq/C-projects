#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
using namespace::std;

class Inventory {
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
public:
	Inventory() {
		itemNumber = 0;
		quantity = 0;
		cost = 0;
		totalCost = 0;
	}
	Inventory(int num, int q, double c) {
		setItemNumber(num);
		setQuantity(q);
		setCost(c);
		setTotalCost();
	}
	void setItemNumber(int n) {
		itemNumber = n;
	}
	void setQuantity(int q) {
		quantity = q;
	}
	void setCost(int c) {
		cost = c;
	}
	void setTotalCost() {
		totalCost = cost * quantity;
	}
	int getItemNumber(){
		return itemNumber;
	}
	int getQuantity() {
		return quantity;
	}
	double getCost(){
		return cost;
	}
	double getTotalCost() {
		return totalCost;
	}
};
#endif
