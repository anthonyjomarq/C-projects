#include <iostream>
#include <iomanip>
using namespace::std;
#include "Circle.h"

int main() {
    Circle circle1;
    double radius, h, k;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Enter the center of the circle" << endl;
    cout << "Enter X: ";
    cin >> h;
    cout << "Enter Y: ";
    cin >> k;
    circle1.setRadius(radius);
    circle1.setH(h);
    circle1.setK(k);
    circle1.display();
    circle1.displayCenter();
    system("pause");
    return 0;
}