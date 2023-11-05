/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: March 10, 2021
	Topic: Review
	File name: lab01.cpp
	Name: [YOUR NAME HERE], ID#[YOUR ID NUMBER HERE]
	Complete the C++ code as required
*/
// write the required include statement
#include "Box.h"

// the main function returns an integer value, should be 0
int main() {
	string name = "";
	// declare a Box object, named box1, use the default constructor
	Box box1;
	cout << "box1 after constructor called...";
	box1.printBox();
	// assign a height of 5, width of 10 and a length of 20 to box1
	box1.setHeight(5);
	box1.setWidth(10);
	box1.setLength(20);
	printf("Enter the name for box1: ");
	cin >> name;
	box1.setName(name);
	printf("The value for size is %d\n", box1.getSize());
	// declare a Box object, named box2, whose height is 7
	// use the appropriate parameterized constructor
	Box box2(7);
	cout << "box2 after constructor called...";
	box2.printBox();
	// assign a width of 5, length of 10 to box2
	box2.setWidth(5);
	box2.setLength(10);
	cout << "Enter the name for box2: ";
	cin >> name;
	box2.setName(name);
	printf("The value for size is %d\n", box1.getSize());
	// declare a Box object, named box3, whose height is 3 and width is 4
	// use the appropriate parameterized constructor
	Box box3(3, 4);
	cout << "box3 after constructor called...";
	box3.printBox();
	// assign a length of 12 to box3
	box3.setLength(12);
	cout << "Enter the name for box3: ";
	cin >> name;
	box3.setName(name);
	printf("The value for size is %d\n", box1.getSize());
	// declare a Box object, named box4, whose height is 20 and width is 10
	// and length is 5; use the appropriate parameterized constructor
	Box box4(20, 10, 5);
	cout << "Enter the name for box4: ";
	cin >> name;
	box4.setName(name);
	printf("The value for size is %d\n", box1.getSize());
	printf("The boxes created have the following dimensions:\n");
	printf("%-*s%-7s%-7s%-7s%-7s\n", box4.getSize(), "NAME", "HEIGHT", "WIDTH", "LENGTH", "VOLUME"); // table headers
	// using printBox method, print the dimensions for each box object
	box1.printBox();
	box2.printBox();
	box3.printBox();
	box4.printBox();
	// write a statement which prints the phrase
	// "Program developed by [YOUR NAME], ID#[YOUR ID NUMBER]"
	// where the square brackets and the text within is substitued with
	// your personal information.
	cout << "Program developed by ME, ID#123456789" << endl;
	system("pause"); // for Visual Studio use only
	return 0; // this statement MUST be included at the end of main
}