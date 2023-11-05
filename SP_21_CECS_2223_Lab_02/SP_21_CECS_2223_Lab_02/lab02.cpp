/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: March 17, 2021
	Topic: OOD Review
	File name: lab02.cpp
	Name: Anthony J. Colon Dominguez, ID#108365
	Complete the C++ code as required
*/
// write the required include statement
#include<iostream>
#include "Cylinder.h"
using namespace::std;
// the main function returns an integer value, should be 0
int main() {
	// declare a Cylinder object, named cyl1, use the default constructor
	// assign a radius of 3.5 and a height of 5 to cyl1
	Cylinder cyl1;
	cyl1.setRadius(3.5);
	cyl1.setHeight(5.0);
	// declare a Cylinder object, named cyl2, whose radius is two and one half
	// use the appropriate parametrized constructor
	// assign a height of seven and a half to cyl2
	Cylinder cyl2(2.5);
	cyl2.setHeight(7.5);
	// declare a Cylinder object, named cyl3, whose radius is 3 and height is 4.25
	// use the appropriate parametrized constructor
	Cylinder cyl3(3, 4.25);
	// declare a Cylinder object, named cyl4, where you choose the constructor
	// to be used and the values for the fields
	Cylinder cyl4(2.0);
	cyl4.setHeight(4.0);

	printf("The cylinders created have the following dimensions:\n");
	// table headers
	printf("%3s%7s%7s%7s%7s%7s%7s\n", "#", "RADIUS", "HEIGHT", "DIAM.", "CIRC.", "AREA", "VOLUME");
	// using printDetails method, print the dimensions for each Cylinder object
	cyl1.printDetails();
	cyl2.printDetails();
	cyl3.printDetails();
	cyl4.printDetails();
	// write a statement which prints the phrase
	// "Program developed by [YOUR NAME], ID#[YOUR ID NUMBER]"
	// where the square brackets and the text within is substitued with
	// your personal information.
	cout << "Program developed by Anthony J. Colon Dominguez, ID#108365" << endl;
	system("pause"); // for Visual Studio use only
	return 0; // this statement MUST be included at the end of main
}