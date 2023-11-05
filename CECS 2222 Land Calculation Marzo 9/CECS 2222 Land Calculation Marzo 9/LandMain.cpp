/*12. Land Calculation
One acre of land is equivalent to 43, 560 square feet.Write a program that calculates
the number of acres in a tract of land with 391, 876 square feet.*/

#include <iostream>
using namespace::std;
#include "Land.h"

int main() {
	Land conversion1;
	double sqFeet;
	char again;
	do {
		cout << "Entre la cantidad en sq Feet a convertir a Acres: ";
		cin >> sqFeet;
		conversion1.setSquareFeet(sqFeet);
		Land conversion2(conversion1);
		conversion1.display();
		conversion2.display();
		cout << "Desea hacer otra conversion (Y/N)? ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	system("pause");
}
/*Entre la cantidad en sq Feet a convertir a Acres: 391876
391876 sqft -> 8.99624Acres
Desea hacer otra conversion (Y/N)? y
Entre la cantidad en sq Feet a convertir a Acres: 45673
45673 sqft -> 1.04851Acres
Desea hacer otra conversion (Y/N)? n
Press any key to continue . . .*/