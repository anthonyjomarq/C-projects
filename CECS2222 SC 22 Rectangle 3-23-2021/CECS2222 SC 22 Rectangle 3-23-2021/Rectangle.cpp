#include<iostream>
using namespace::std;
// Implementation file for the Rectangle class.
#include "Rectangle.h"
#include "NegativeWidth.h"
#include "NegativeLength.h"
Rectangle::Rectangle()
{
	width = 0.0; length = 0.0;
}
//***********************************************************
// setWidth sets the value of the member variable width. *
//***********************************************************
void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
		throw NegativeWidth(w);
}
//***********************************************************
// setLength sets the value of the member variable length. *
//***********************************************************
void Rectangle::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
		throw NegativeLength(len);
}
double Rectangle::getWidth() const
{
	return width;
}
double Rectangle::getLength() const
{
	return length;
}
double Rectangle::getArea() const
{
	return width * length;
}