#include <iostream>
#include <string>
#include "Car.h"
using namespace std;


int main()
{
	//Car Object
	Car a(2008, "Toyota");

	cout << "Current speed: ";
	cout << a.getSpeed() << endl; 
	cout << "Accelerating... " << endl;
	for (int i = 0; i < 5; i++) {
		a.accelerate();
		cout << "Current speed: ";
		cout << a.getSpeed() << endl;
	}
	cout << "Decelerating... " << endl;
	for (int i = 0; i < 5; i++) {
		a.brake();
		cout << "Current speed: ";
		cout << a.getSpeed() << endl;
	}
	return 0;
}
