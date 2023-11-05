/*CECS2223 Computer Programming II Lab 
Spring 2021, Sec. 05 
Date: March 8, 2021
Topic: Review
File name: Circle.cpp
Anthony J. Colon Dominguez, #108365*/
#include "Circle.h"
const double PI = 3.1416;
//The default constructor initializes radius to 0
Circle::Circle() {
	radius = 0;
}

//The parameterized constructor assigns the value of the parameter to radius 
Circle::Circle(double aRadius) {
	radius = aRadius;
}

//The setRadius method assigns the value of the parameter to radius 
void Circle::setRadius(double aRadius) {
	radius = aRadius;
}

//The getRadius method returns the value of radius
double Circle::getRadius()const {
	return radius;
}

//Returns the circumference of the circle
double Circle::getCircumference() const
{
	return 2 * PI * radius;
}

double Circle::getArea() const
{
	return PI * radius * radius;
}

void Circle::printCircle() const
{
	printf("The Circle with radius %.4f has the following values: ", radius);
	printf("diameter: %.4f\ncircumference: %.4f\narea: %.4f\n", getDiameter(), getCircumference(), getArea());
}
