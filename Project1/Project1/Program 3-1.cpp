// Example program
#include <iostream>
using namespace std;

int main()
{
    int lenght, width, area;

    cout << "This program calculates the area of a ";
    cout << "rectangle.\n";
    cout << "What is the length of the rectangle? ";
    cin >> lenght;
    cout << "What is the width of the rectangle? ";
    cin >> width;
    area = lenght * width;
    cout << "The area of the rectangle is " << area << ".\n";
    return 0;
}