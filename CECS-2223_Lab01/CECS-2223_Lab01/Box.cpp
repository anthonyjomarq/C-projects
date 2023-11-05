
/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: March 10, 2021
	Topic: Review
	File name: Box.cpp
	Name: [YOUR NAME HERE], ID#[YOUR ID NUMBER HERE]
	Define the Box class
*/
// write the include statements required
#include "Box.h"

// initialize the class variable
size_t Box::size = 0;

// the default constructor initializes all fields to 0
Box::Box() {
	height = 0;
	width = 0;
	length = 0;
	name = "null";
}

// this parameterized constructor receives the height and initializes all other fields to 0 
Box::Box(int aHeight) {
	height = aHeight;
	width = 0;
	length = 0;
	name = "null";
}

// this parameterized constructor receives the height and width, initializes all other fields to 0 
Box::Box(int aHeight, int aWidth) {
	height = aHeight;
	width = aWidth;
	length = 0;
	name = "null";
}

// this parameterized constructor receives the height, width, and length
Box::Box(int aHeight, int aWidth, int aLength) {
	height = aHeight;
	width = aWidth;
	length = aLength;
	name = "null";
}

// The get and set methods DO NOT prompt the user for values
// or include any cout or printf statements

void Box::setHeight(int aHeight) {
	height = aHeight;
}

void Box::setWidth(int aWidth) {
	width = aWidth;
}

void Box::setLength(int aLength) {
	length = aLength;
}

void Box::setName(string aName) {
	if (aName.length() > size - 1) {
		size = aName.length() + 1;
	}
	name = aName;
}

int Box::getHeight() const {
	return height;
}

int Box::getWidth() const {
	return width;
}

int Box::getLength() const {
	return length;
}

// returns the size of the longest name
size_t Box::getSize() const {
	return size;
}

// return the name of the object in uppercase letters
string Box::getName() const {
	string editedName = name;
	for (unsigned int i = 0; i < editedName.length(); i++) {
		if (isalpha(editedName[i]))
			editedName[i] = toupper(editedName[i]);
	}
	// box1 [0] - b; [1] - o; [2] - x 
	return editedName;
}

// computes the volume for the bos and returns the value
int Box::getVolume() const {
	return height * width * length;
}

// The printBox method uses printf to output values formatted
// to be displayed in a table
// the values to be displayed are: height, width, length, and volume
// add the name as the first field
// All values must be printed in the same line.
void Box::printBox() const {
	printf("%-*s%-7d%-7d%-7d%-7d\n", getSize(), getName().c_str(), getHeight(), getWidth(), getLength(), getVolume());
}