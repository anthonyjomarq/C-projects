// This program uses the Rectangle class, which is declared in
// the Rectangle.h file. The member Rectangle class's member
// functions are defined in the Rectangle.cpp file. This program
// should be compiled with those files in a project.
#include "stdafx.h"
#include<iostream>
#include "Rectangle.h"  // Needed for Rectangle class

using namespace::std;

int main()
{
    Rectangle box;
    double rectWidth;
    double rectLength;

    cout << " This program will calculate the area of a rectangle.\n";
    cout << "What is the width? = ";
    cin >> rectWidth;
    cout << "What is the length? = ";
    cin >> rectLength;

    // Store the width and length of the rectangle // in the box object.
    box.setWidth(rectWidth);
    box.setLength(rectLength);


    // Display the rectangle's data.
    cout << "Here is the rectangle data :\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area:  " << box.getArea() << endl;

    return 0;

}