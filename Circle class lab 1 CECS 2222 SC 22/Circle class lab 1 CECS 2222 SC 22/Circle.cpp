#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace::std;
#include "Circle.h"

//Constructor function
//The default constructor initializes radius, x and y to 0 
Circle::Circle() {
	radius = 0;
	h = 0;
	k = 0;
}
Circle::Circle(double aRadius) {
	radius = aRadius;
	h = 0;
	k = 0;
}
Circle::~Circle() {
	cout << "Destroyed object of data type Circle\n";
	system("pause");
}
//Mutators functions 
void Circle::setRadius(double aRadius) {
	radius = aRadius;
}
void Circle::setH(double aH) {
	h = aH;
}
void Circle::setK(double aK) {
	k = aK;
}
//Accesor function
double Circle::getH() const {
	return h;
}
double Circle::getK() const {
	return k;
}
double Circle::getRadius() const {
	return radius;
}
double Circle::getArea() const {
	return PI * radius * radius;
}
double Circle::getDiameter() const {
	return 2.0 * radius;
}
double Circle::getCircumference() const {
	return 2.0 * PI * radius;
}
//Member functions
void Circle::display() const {
	cout << " Circle Area: " << getArea() << endl;
	cout << " Circle Diameter: " << getDiameter() << endl;
	cout << " Circle Circumference: " << getCircumference() << endl;
}
void Circle::displayCenter() const {
	cout << "C(" << h << "," << k << ")\n";
    cout << " Circle Center formula: " << "(x - " << h << ")^2 + (y - " << k << ")^2 = " << radius * radius << endl;
}