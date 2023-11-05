// Specification file for the Rectangle class
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
private:
    double width; // The rectangle's width
    double length; // The rectangle's length
public:
    // Default constructor
    Rectangle();
    // Mutator functions, defined in Rectangle.cpp
    void setWidth(double);
    void setLength(double);
    // Accessor functions
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};
#endif

