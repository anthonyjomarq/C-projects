#include<iostream>
#include "Rectangle.h"

using namespace std;




int main()
{
    Rectangle box(12, 34);
    Rectangle* ptr;
    ptr = &box;
    double rectWidth;
    double rectLength;

    cout << "Here is the rectangle data :\n";
    cout << "width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area:  " << box.getArea() << endl;



    cout << " This program will calculate the area of a\n";
    cout << "rectangle. what is the width? = ";
    cin >> rectWidth;
    cout << "What is the length = ";
    cin >> rectLength;

    box.setWidth(rectWidth);
    box.setLength(rectLength);



    cout << "Here is the rectangle data :\n";
    cout << "width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area:  " << box.getArea() << endl;

    ptr->setLength(3);
    ptr->setWidth(5);

    cout << "Here is the rectangle pointer :\n";
    cout << "width: " << ptr->getWidth() << endl;
    cout << "Length: " << ptr->getLength() << endl;
    cout << "Area:  " << ptr->getArea() << endl;

    cout << "Here is the rectangle data :\n";
    cout << "width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area:  " << box.getArea() << endl;



    return 0;

}