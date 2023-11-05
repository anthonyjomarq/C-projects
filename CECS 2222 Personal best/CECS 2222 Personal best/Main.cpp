//File Main.cpp
#include <iostream>
#include <string>
#include "PersonalBest.h"
using namespace::std;

void addJump(PersonalBest* jump, int numberOfJumps);
int main() {
	PersonalBest* jump;
	int numberOfJumps = 3;
	jump = new PersonalBest[numberOfJumps];
	addJump(jump, numberOfJumps);
	delete[] jump;
	jump = nullptr;
	return 0;
}

void addJump(PersonalBest* jump, int numberOfJumps)
{
	for (int i = 0; i < numberOfJumps; i++) {
		double meters;
		Date temp;
		do {
			cout << "Enter meters: ";
			cin >> meters;
			if (meters < 2 || meters> 5) {
				cout << "Error! The measuremente in meters cannot be less than 2 or more than 5.\n";
			}
		} while (meters < 2 || meters> 5);
		cin >> temp;
		jump->addJump(meters, temp);
		jump->displayJump();
	}
}
