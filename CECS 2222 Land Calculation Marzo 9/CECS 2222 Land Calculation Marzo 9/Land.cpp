#include<iostream>
#include <cstdlib>
using namespace::std;
#include "Land.h"

Land::Land(const Land& obj) {
	setSquareFeet(obj.getSquareFeet());
}
Land::~Land() {
	cout << "Destroyed object of data type Land\n";
	system("pause");
}
Land::Land(double aSquareFeet) {
	squareFeet = aSquareFeet;
}
void Land::setSquareFeet(double aSquareFeet) {
	if (squareFeet >= 0) 
		squareFeet = aSquareFeet;
	else {
		cout << "Invalid measure square feet\n";
		exit(EXIT_FAILURE);
	}//end else 
}
double Land::getSquareFeet() const {
	return squareFeet;
}
double Land::getAcre() const {
	const double ACRE = 43560.0;
	return (squareFeet / ACRE);
}
void Land::display() const {
	cout << getSquareFeet() << " sqft -> " << getAcre() << "Acres\n";
}
