#ifndef CUBE_H
#define CUBE_H
#include <iostream>
#include "Rectangle.h"
using namespace::std;

class Cube : public Rectangle
{
protected:
	double height;
	double volume;
public:
	// Default constructor 
	Cube();
	// Constructor #2 
	Cube(double w, double len, double h);
	~Cube();
	void setHeight(double h);
	void set(double w, double len, double h);
	double getHeight() const;
	double getVolume() const;
	void display2() const;
};
#endif