#include "Rectangle.h"

Rectangle::Rectangle()
{
    cout << "Default Constructor de la clase Rectangle\n";
    width = 0.0;
    length = 0.0;
}

// Constructor #2 
Rectangle::Rectangle(double w, double len)
{
    width = w;
    length = len;
}

Rectangle::~Rectangle()
{
    cout << "Default Constructor de la clase Rectangle\n";
    system("pause");
}

void Rectangle::setWidth(double aWidth)
{
    width = aWidth;
}

void Rectangle::setLength(double aLength)
{
    length = aLength;
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

void Rectangle::display() const
{
    cout << "Width: " << getWidth() << endl;
    cout << "Length: " << getLength() << endl;
    cout << "Base area: " << getArea() << endl;
}

