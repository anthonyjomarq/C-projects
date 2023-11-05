//File Rectangle.cpp
#include <iostream>
using namespace::std;
#include "Rectangle.h"
Rectangle::Rectangle() {
	width = 1.0;
	length = 1.0;
}
Rectangle::Rectangle(double aWidth, double aLength) {
	setWidth(aWidth);
	setLength(aLength);
}
Rectangle::Rectangle(const Rectangle& anRectangle) {
	setWidth(anRectangle.getWidth());
	setLength(anRectangle.getLength());
}
Rectangle::~Rectangle() {
	cout << "\nDESTRUYENDO OBJETO\n";
	display();
	system("pause");
}
void Rectangle::display() const
{
	cout << "\nHere is the rectangle's data:\n";
	cout << "Width: " << getWidth() << endl;
	cout << "Length: " << getLength() << endl;
	cout << "Area: " << getArea() << endl;
	cout << "Perimeter:" << getPerimeter() << endl;
	cout << endl;
}
//**************************************************
// setWidth assigns a value to the width member. *
//**************************************************
void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}
//***************************************************
// setLength assigns a value to the length member. *
//***************************************************
void Rectangle::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}
//***************************************************
// getWidth returns the value in the width member. *
//***************************************************
double Rectangle::getWidth() const
{
	return width;
}
//****************************************************
// getLength returns the value in the length member. *
//****************************************************
double Rectangle::getLength() const
{
	return length;
}
//******************************************************
// getArea returns the product of width times length. *
//******************************************************
double Rectangle::getArea() const
{
	return getWidth() * getLength();
}
bool Rectangle::operator > (const Rectangle& obj) const {
	bool flag = false;
	if (getArea() > obj.getArea())
		flag = true;
	return flag;
}
bool Rectangle::operator < (const Rectangle& obj) const {
	bool flag = false;
	if (getArea() < obj.getArea())
		flag = true;
	return flag;
}
bool Rectangle::operator >= (const Rectangle& obj) const {
	bool flag = false;
	if ((getArea() > obj.getArea()) || getArea() == obj.getArea())
		flag = true;
	return flag;
}
bool Rectangle::operator <= (const Rectangle& obj) const {
	bool flag = false;
	if (getArea() < obj.getArea() || getArea() == obj.getArea())
		flag = true;
	return flag;
}
bool Rectangle::operator == (const Rectangle& obj) const {

	bool flag = false;
	if (getArea() == obj.getArea())
		flag = true;
	return flag;
}
bool Rectangle::operator != (const Rectangle& obj) const {
	
	return (!(getArea() == obj.getArea()));
}
ostream& operator <<(ostream &output, const Rectangle &obj) {
	output << "\nDisplaying...\n";
	output << "\nEl ancho del rectangulo: " << obj.getWidth() << endl;
	output << "El largo del rectangulo: " << obj.getLength() << endl;
	output << "El area del rectangulo: " << obj.getArea() << endl;
	return output;
}
istream& operator >> (istream &input, Rectangle &obj) {
	cout << "\tInfo del Rectangulo: \n";
	cout << "Entra el largo del rectangulo: ";
	input >> obj.length;
	cout << "Entra el ancho del rectangulo: ";
	input >> obj.width;
	return input;
}
//*****************************************************
// Funcion que retorna el perimetro de la instancia
//*****************************************************
double Rectangle::getPerimeter() const {
	return 2 * getWidth() + 2 * getLength();
}