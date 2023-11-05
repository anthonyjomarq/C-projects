#ifndef RECTANGLE_H 
#define RECTANGLE_H
#include <iostream>
using namespace::std;
class Rectangle
{
private:
    double width;
    double length;
public:
    // Default constructor 
    Rectangle();
    // Constructor #2 
    Rectangle(double w, double len);
    ~Rectangle();
    void setWidth(double aWidth);
    void setLength(double aLength);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    void display() const;
};
#endif