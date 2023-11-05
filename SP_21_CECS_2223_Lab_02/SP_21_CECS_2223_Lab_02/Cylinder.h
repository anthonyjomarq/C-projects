#pragma once
/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: March 17, 2021
	Topic: OOD Review
	File name: Cylinder.h
	This file declares a class named Cylinder
	Name: Anthony J. Colon Dominguez, ID#108365
*/
// This code has errors, correct them!
#include <iostream>
using namespace::std;
class Cylinder {
private:
	// Instance or member variables
	double radius;
	double height;
	int objectNumber;
	// Class variables
	static const double PI; //3.1416
	static int number;

public:
	Cylinder();
	Cylinder(double);
	Cylinder(double, double);
	void setRadius(double);
	void setHeight(double);
	double getHeight() ;
	double getRadius() ;
	double getDiameter() ; //2 x radius
	double getCircumference() ; // 2 x PI x radius
	double getArea() ; // PI x radius^2
	double getVolume(); // area x height
	void printDetails() ;
};
