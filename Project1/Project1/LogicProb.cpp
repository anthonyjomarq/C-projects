// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.
//CECS 2203-21 Anthony J. Colon Dominguez #108365

#include <iostream>
using namespace std;

int main() {

	float firstNumber;
	float secondNumber; 
	float swap;

	// Prompt user to enter the first number.

	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Promt user to enter the second number.

	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.

	cout << endl << "You input the numbers as " << firstNumber
		<< " and " << secondNumber << endl;

	// Now we will swap the values.

	swap = firstNumber; //The variable "swap" is added so the first value its keeped to be swaped by the second number. 
	firstNumber = secondNumber;
	secondNumber = swap;
	

	// Output the values.

	cout << "After swapping, the values of the two numbers are "
		<< firstNumber << " and " << secondNumber << endl;

	return 0;

}