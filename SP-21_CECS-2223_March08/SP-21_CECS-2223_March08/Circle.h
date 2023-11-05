/*CECS2223 Computer Programming II Lab
Spring 2021, Sec. 05
Date: March 8, 2021
Topic: Review
File name: Circle.h
Anthony J. Colon Dominguez, #108365*/
#pragma once
//Circle class declaration
#include <iostream>
using namespace::std;
class Circle {
private:
	double radius; // Members or fields
	static const double PI;// a static variable is a Class variable
public:
	Circle(); //The default constructor
	Circle(double);//Tje parameterized constructor
	void setRadius(double); //set the value for radius
	double getRadius() const; // getter for radius
	double getDiameter() const;
	double getCircumference() const;
	double getArea() const;
	void printCircle() const;
};