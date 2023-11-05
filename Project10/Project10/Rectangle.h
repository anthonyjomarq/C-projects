#pragma once
// specification file for the Rectangle Class.
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
private:
    double width;
    double length;

public:
    Rectangle(double, double);
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
#endif

//Implementation
#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}




void Rectangle::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
    {
        cout << " INvalid Width Progrma EXIT by\n";
        exit(0);
    }
}

void Rectangle::setLength(double len)
{
    if (len >= 0)
        length = len;
    else
    {
        cout << " INvalid length Progrma EXIT by\n";
        exit(0);
    }

}
double Rectangle::getLength() const
{
    return length;
}
double Rectangle::getWidth() const
{
    return width;

}

double Rectangle::getArea() const
{
    return width * length;
}
