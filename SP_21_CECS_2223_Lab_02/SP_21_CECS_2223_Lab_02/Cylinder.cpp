/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: March 17, 2021
	Topic: OOD Review
	File name: Cylinder.cpp
	Name: Anthony J. Colon Dominguez, ID#108365
	Define the Cylinder class
*/
// the class variable number must be initialized to 1
//All constructors must assign the value of number to objectNumber
//Afterwards, increment the class variable number.
#include "Cylinder.h"
const double Cylinder::PI = 3.14159;
int Cylinder::number = 1;
Cylinder::Cylinder() {
	radius = 0;
	height = 0;
	objectNumber = number;
	number++;
}

Cylinder::Cylinder(double aRadius) {
	radius = aRadius;
	height = 0;
	objectNumber = number;
	number++;
	
}
Cylinder::Cylinder(double aRadius , double aHeight) {
	radius = aRadius;
	height = aHeight;
	objectNumber = number;
	number++;
}
// The get and set methods DO NOT prompt the user for values
// or include any cout or printf statements
void Cylinder::setRadius(double aRadius) {
	radius = aRadius;
}
void Cylinder::setHeight(double aHeight) {
	height = aHeight;
}
double Cylinder::getHeight()  {
	return height;
}
double Cylinder::getRadius() {
	return radius;
}
double Cylinder::getDiameter()  {
	return 2.0 * radius;
}
double Cylinder::getCircumference()  {
	return  2 * PI * radius;
}
double Cylinder::getArea()  {
	return PI * radius * radius;
}
double Cylinder::getVolume() {
	return getArea() * height;
}
// The printDetails method uses printf to output values formatted
// to be displayed in a table
// the values to be displayed are: object number, radius, height,
// diameter, circumference, area and volume. All values must be 
// printed in the same line.
void Cylinder::printDetails() {
	printf("%3d%7.2f%7.2f%7.2f%7.2f%7.2f%7.2f\n", objectNumber, radius, height, getDiameter(), getCircumference(), getArea(), getVolume());

}